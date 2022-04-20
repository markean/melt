#ifndef EL_H_
#define EL_H_

#include "eigen_config.h"
#include <RcppEigen.h>
#include "utils.h"
#ifdef _OPENMP
#include <omp.h>
#endif

class EL
{
public:
  // members
  const Eigen::VectorXd par;  // parameter value specified
  Eigen::VectorXd l;          // Lagrange multiplier
  const std::function<Eigen::VectorXd(const Eigen::Ref<const Eigen::MatrixXd>&,
                                      const Eigen::Ref<const Eigen::ArrayXd>&)>
    mele_fn;                  // maximum empirical likelihood estimator
  double nllr{0};             // negative log-likelihood ratio
  int iter{0};                // iterations performed in optimization
  bool conv{false};           // convergence status
  const Eigen::ArrayXd w;           // weights

  // constructors
  // EL(const Eigen::Ref<const Eigen::MatrixXd>& g,
  //    const int maxit_l,
  //    const double tol_l,
  //    const double th,
  //    const Rcpp::Nullable<const Eigen::Map<const Eigen::ArrayXd>&> wt);
  // EL(const std::string method,
  //    const Eigen::Ref<const Eigen::VectorXd>& par0,
  //    const Eigen::Ref<const Eigen::MatrixXd>& x,
  //    const int maxit_l,
  //    const double tol_l,
  //    const double th,
  //    const Rcpp::Nullable<const Eigen::Map<const Eigen::ArrayXd>&> wt);


  // test
  EL(const std::string method,
     const Eigen::Ref<const Eigen::VectorXd>& par0,
     const Eigen::Ref<const Eigen::MatrixXd>& x,
     const int maxit_l,
     const double tol_l,
     const double th,
     const Eigen::Ref<const Eigen::ArrayXd>& wt);
  EL(const Eigen::Ref<const Eigen::MatrixXd>& g,
     const int maxit_l,
     const double tol_l,
     const double th,
     const Eigen::Ref<const Eigen::ArrayXd>& wt);

  // functions for constructors
  void set_el(const Eigen::Ref<const Eigen::MatrixXd>& g,
              const Eigen::Ref<const Eigen::ArrayXd>& w);
  std::function<Eigen::VectorXd(const Eigen::Ref<const Eigen::MatrixXd>&,
                                const Eigen::Ref<const Eigen::ArrayXd>&)>
    set_mele_fn(const std::string method);
  std::function<Eigen::MatrixXd(const Eigen::Ref<const Eigen::MatrixXd>&,
                                const Eigen::Ref<const Eigen::VectorXd>&)>
    set_g_fn(const std::string method);

  // methods
  // log probability
  Eigen::ArrayXd logp_g(const Eigen::Ref<const Eigen::MatrixXd>& g) const;
  Eigen::ArrayXd logp(const Eigen::Ref<const Eigen::MatrixXd>& x) const;
  // log-likelihood
  double loglik() const;

private:
  // members
  const int maxit_l;          // maximum number of iterations
  const double tol_l;         // relative convergence tolerance
  const double th;          // threshold value for negative log-likelihood ratio
  const int n;              // sample size
  // estimating function
  const std::function<Eigen::MatrixXd(
      const Eigen::Ref<const Eigen::MatrixXd>&,
      const Eigen::Ref<const Eigen::VectorXd>&)> g_fn;
};

class MINEL
{
public:
  // members
  Eigen::VectorXd par;  // parameter value (solution of optimization problem)
  Eigen::VectorXd l;    // Lagrange multiplier
  double nllr{0};       // negative log likelihood ratio
  int iter{0};          // iterations performed in optimization
  bool conv{false};     // convergence status

  // constructors
  // minimization
  // MINEL(const std::string method,
  //       const Eigen::Ref<const Eigen::VectorXd>& par0,
  //       const Eigen::Ref<const Eigen::MatrixXd>& x,
  //       const Eigen::Ref<const Eigen::MatrixXd>& lhs,
  //       const Eigen::Ref<const Eigen::VectorXd>& rhs,
  //       const int maxit,
  //       const int maxit_l,
  //       const double tol,
  //       const double tol_l,
  //       const double th,
  //       const Rcpp::Nullable<const Eigen::Map<const Eigen::ArrayXd>&> wt);

  MINEL(const std::string method,
        const Eigen::Ref<const Eigen::VectorXd>& par0,
        const Eigen::Ref<const Eigen::MatrixXd>& x,
        const Eigen::Ref<const Eigen::MatrixXd>& lhs,
        const Eigen::Ref<const Eigen::VectorXd>& rhs,
        const int maxit,
        const int maxit_l,
        const double tol,
        const double tol_l,
        const double th,
        const Eigen::Ref<const Eigen::ArrayXd>& wt);

  // functions for constructors
  std::function<Eigen::MatrixXd(const Eigen::Ref<const Eigen::MatrixXd>&,
                                const Eigen::Ref<const Eigen::VectorXd>&)>
    set_g_fn(const std::string method);
  std::function<Eigen::MatrixXd(const Eigen::Ref<const Eigen::VectorXd>&,
                                const Eigen::Ref<const Eigen::MatrixXd>&,
                                const Eigen::Ref<const Eigen::MatrixXd>&,
                                const Eigen::Ref<const Eigen::VectorXd>&,
                                const Eigen::Ref<const Eigen::ArrayXd>&,
                                const bool)>
    set_gr_fn(const std::string method);

  // methods
  // log probability
  // Eigen::ArrayXd logp(const Eigen::Ref<const Eigen::MatrixXd>& x) const;
  Eigen::ArrayXd logp(const Eigen::Ref<const Eigen::MatrixXd>& x,
                      const Eigen::Ref<const Eigen::ArrayXd>& wt) const;
  // log-likelihood
  double loglik(const Eigen::Ref<const Eigen::ArrayXd>& wt) const;

private:
  // members
  const int maxit;  // maximum number of iterations
  const int maxit_l;  // maximum number of iterations
  const double tol; // relative convergence tolerance
  const double tol_l; // relative convergence tolerance
  const double th;  // threshold value for negative log-likelihood ratio
  const int n;      // sample size
  const bool weighted;      // sample size
  // estimating function
  const std::function<Eigen::MatrixXd(
      const Eigen::Ref<const Eigen::MatrixXd>&,
      const Eigen::Ref<const Eigen::VectorXd>&)> g_fn;
  // gradient function of negative log likelihood ratio function
  const std::function<Eigen::MatrixXd(
      const Eigen::Ref<const Eigen::VectorXd>&,
      const Eigen::Ref<const Eigen::MatrixXd>&,
      const Eigen::Ref<const Eigen::MatrixXd>&,
      const Eigen::Ref<const Eigen::VectorXd>&,
      const Eigen::Ref<const Eigen::ArrayXd>&,
      const bool)> gr_fn;
};

class PSEUDO_LOG
{
public:
  // members
  Eigen::ArrayXd dplog;
  Eigen::ArrayXd sqrt_neg_d2plog;
  double plog_sum{0};

  // constructor
  PSEUDO_LOG(const Eigen::Ref<const Eigen::ArrayXd>& x,
             const Eigen::Ref<const Eigen::ArrayXd>& w);

  // methods
  static Eigen::ArrayXd plog(Eigen::VectorXd&& x);
  static Eigen::ArrayXd plog(Eigen::VectorXd&& x,
                             const Eigen::Ref<const Eigen::ArrayXd>& w);
  static double sum(const Eigen::Ref<const Eigen::VectorXd>& x,
                    const Eigen::Ref<const Eigen::ArrayXd>& w);
};

Eigen::VectorXd gr_nloglr_lm(
    const Eigen::Ref<const Eigen::VectorXd>& l,
    const Eigen::Ref<const Eigen::MatrixXd>& g,
    const Eigen::Ref<const Eigen::MatrixXd>& data,
    const Eigen::Ref<const Eigen::VectorXd>& par,
    const Eigen::Ref<const Eigen::ArrayXd>& w,
    const bool weighted);
#endif
