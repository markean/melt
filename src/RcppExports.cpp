// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// compute_EL
Rcpp::List compute_EL(const std::string method, const Eigen::Map<Eigen::VectorXd>& par0, const Eigen::Map<Eigen::MatrixXd>& x, const int maxit_l, const double tol_l, const Rcpp::Nullable<double> th, const Eigen::Map<Eigen::ArrayXd>& w);
RcppExport SEXP _melt_compute_EL(SEXP methodSEXP, SEXP par0SEXP, SEXP xSEXP, SEXP maxit_lSEXP, SEXP tol_lSEXP, SEXP thSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type par0(par0SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit_l(maxit_lSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_l(tol_lSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<double> >::type th(thSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::ArrayXd>& >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_EL(method, par0, x, maxit_l, tol_l, th, w));
    return rcpp_result_gen;
END_RCPP
}
// compute_ELD
Rcpp::NumericVector compute_ELD(const std::string method, const Eigen::Map<Eigen::VectorXd>& par0, const Eigen::Map<Eigen::MatrixXd>& x, const int maxit_l, const double tol_l, const Rcpp::Nullable<double> th, const int nthreads, const Eigen::Map<Eigen::ArrayXd>& wt);
RcppExport SEXP _melt_compute_ELD(SEXP methodSEXP, SEXP par0SEXP, SEXP xSEXP, SEXP maxit_lSEXP, SEXP tol_lSEXP, SEXP thSEXP, SEXP nthreadsSEXP, SEXP wtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type par0(par0SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit_l(maxit_lSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_l(tol_lSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<double> >::type th(thSEXP);
    Rcpp::traits::input_parameter< const int >::type nthreads(nthreadsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::ArrayXd>& >::type wt(wtSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_ELD(method, par0, x, maxit_l, tol_l, th, nthreads, wt));
    return rcpp_result_gen;
END_RCPP
}
// compute_bootstrap_calibration
Rcpp::NumericVector compute_bootstrap_calibration(const double alpha, const double statistic, const int B, const int seed, const int nthreads, const std::string method, const Eigen::Map<Eigen::MatrixXd>& x, const Eigen::Map<Eigen::VectorXd>& par, const int maxit_l, const double tol_l, const Rcpp::Nullable<double> th, const Eigen::Map<Eigen::ArrayXd>& w);
RcppExport SEXP _melt_compute_bootstrap_calibration(SEXP alphaSEXP, SEXP statisticSEXP, SEXP BSEXP, SEXP seedSEXP, SEXP nthreadsSEXP, SEXP methodSEXP, SEXP xSEXP, SEXP parSEXP, SEXP maxit_lSEXP, SEXP tol_lSEXP, SEXP thSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const double >::type statistic(statisticSEXP);
    Rcpp::traits::input_parameter< const int >::type B(BSEXP);
    Rcpp::traits::input_parameter< const int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const int >::type nthreads(nthreadsSEXP);
    Rcpp::traits::input_parameter< const std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type par(parSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit_l(maxit_lSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_l(tol_lSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<double> >::type th(thSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::ArrayXd>& >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_bootstrap_calibration(alpha, statistic, B, seed, nthreads, method, x, par, maxit_l, tol_l, th, w));
    return rcpp_result_gen;
END_RCPP
}
// compute_confidence_intervals
Eigen::MatrixXd compute_confidence_intervals(const std::string method, const Eigen::Map<Eigen::VectorXd>& par0, const Eigen::Map<Eigen::MatrixXd>& x, const double cutoff, const Rcpp::IntegerVector& idx, const int maxit, const int maxit_l, const double tol, const double tol_l, const Rcpp::Nullable<double> step, const Rcpp::Nullable<double> th, const int nthreads, const Eigen::Map<Eigen::ArrayXd>& w);
RcppExport SEXP _melt_compute_confidence_intervals(SEXP methodSEXP, SEXP par0SEXP, SEXP xSEXP, SEXP cutoffSEXP, SEXP idxSEXP, SEXP maxitSEXP, SEXP maxit_lSEXP, SEXP tolSEXP, SEXP tol_lSEXP, SEXP stepSEXP, SEXP thSEXP, SEXP nthreadsSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type par0(par0SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double >::type cutoff(cutoffSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type idx(idxSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit_l(maxit_lSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_l(tol_lSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<double> >::type step(stepSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<double> >::type th(thSEXP);
    Rcpp::traits::input_parameter< const int >::type nthreads(nthreadsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::ArrayXd>& >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_confidence_intervals(method, par0, x, cutoff, idx, maxit, maxit_l, tol, tol_l, step, th, nthreads, w));
    return rcpp_result_gen;
END_RCPP
}
// compute_confidence_region
Rcpp::NumericVector compute_confidence_region(const std::string method, const Eigen::Map<Eigen::VectorXd>& par0, const Eigen::Map<Eigen::MatrixXd>& x, const int npar, const double cv, const Rcpp::IntegerVector& idx, const Eigen::Map<Eigen::MatrixXd>& circ, const int maxit, const int maxit_l, const double tol, const double tol_l, const Rcpp::Nullable<double> step, const Rcpp::Nullable<double> th, const int nthreads, const Eigen::Map<Eigen::ArrayXd>& w);
RcppExport SEXP _melt_compute_confidence_region(SEXP methodSEXP, SEXP par0SEXP, SEXP xSEXP, SEXP nparSEXP, SEXP cvSEXP, SEXP idxSEXP, SEXP circSEXP, SEXP maxitSEXP, SEXP maxit_lSEXP, SEXP tolSEXP, SEXP tol_lSEXP, SEXP stepSEXP, SEXP thSEXP, SEXP nthreadsSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type par0(par0SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int >::type npar(nparSEXP);
    Rcpp::traits::input_parameter< const double >::type cv(cvSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type idx(idxSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type circ(circSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit_l(maxit_lSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_l(tol_lSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<double> >::type step(stepSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<double> >::type th(thSEXP);
    Rcpp::traits::input_parameter< const int >::type nthreads(nthreadsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::ArrayXd>& >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_confidence_region(method, par0, x, npar, cv, idx, circ, maxit, maxit_l, tol, tol_l, step, th, nthreads, w));
    return rcpp_result_gen;
END_RCPP
}
// compute_generic_EL
Rcpp::List compute_generic_EL(const Eigen::Map<Eigen::MatrixXd>& g, const int maxit_l, const double tol_l, const Rcpp::Nullable<double> th, const Eigen::Map<Eigen::ArrayXd>& w);
RcppExport SEXP _melt_compute_generic_EL(SEXP gSEXP, SEXP maxit_lSEXP, SEXP tol_lSEXP, SEXP thSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type g(gSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit_l(maxit_lSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_l(tol_lSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<double> >::type th(thSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::ArrayXd>& >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_generic_EL(g, maxit_l, tol_l, th, w));
    return rcpp_result_gen;
END_RCPP
}
// get_max_threads
int get_max_threads();
RcppExport SEXP _melt_get_max_threads() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(get_max_threads());
    return rcpp_result_gen;
END_RCPP
}
// get_rank
int get_rank(const Eigen::Map<Eigen::MatrixXd>& x);
RcppExport SEXP _melt_get_rank(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(get_rank(x));
    return rcpp_result_gen;
END_RCPP
}
// test_GLM
Rcpp::List test_GLM(const std::string method, const Eigen::Map<Eigen::MatrixXd>& x, const Eigen::Map<Eigen::VectorXd>& par0, const bool intercept, const int maxit, const int maxit_l, const double tol, const double tol_l, const Rcpp::Nullable<double> step, const Rcpp::Nullable<double> th, const int nthreads, const Eigen::Map<Eigen::ArrayXd>& w);
RcppExport SEXP _melt_test_GLM(SEXP methodSEXP, SEXP xSEXP, SEXP par0SEXP, SEXP interceptSEXP, SEXP maxitSEXP, SEXP maxit_lSEXP, SEXP tolSEXP, SEXP tol_lSEXP, SEXP stepSEXP, SEXP thSEXP, SEXP nthreadsSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type par0(par0SEXP);
    Rcpp::traits::input_parameter< const bool >::type intercept(interceptSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit_l(maxit_lSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_l(tol_lSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<double> >::type step(stepSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<double> >::type th(thSEXP);
    Rcpp::traits::input_parameter< const int >::type nthreads(nthreadsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::ArrayXd>& >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(test_GLM(method, x, par0, intercept, maxit, maxit_l, tol, tol_l, step, th, nthreads, w));
    return rcpp_result_gen;
END_RCPP
}
// test_LM
Rcpp::List test_LM(const Eigen::Map<Eigen::MatrixXd>& x, const Eigen::Map<Eigen::VectorXd>& par0, const bool intercept, const int maxit, const int maxit_l, const double tol, const double tol_l, const Rcpp::Nullable<double> step, const Rcpp::Nullable<double> th, const int nthreads, const Eigen::Map<Eigen::ArrayXd>& w);
RcppExport SEXP _melt_test_LM(SEXP xSEXP, SEXP par0SEXP, SEXP interceptSEXP, SEXP maxitSEXP, SEXP maxit_lSEXP, SEXP tolSEXP, SEXP tol_lSEXP, SEXP stepSEXP, SEXP thSEXP, SEXP nthreadsSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type par0(par0SEXP);
    Rcpp::traits::input_parameter< const bool >::type intercept(interceptSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit_l(maxit_lSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_l(tol_lSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<double> >::type step(stepSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<double> >::type th(thSEXP);
    Rcpp::traits::input_parameter< const int >::type nthreads(nthreadsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::ArrayXd>& >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(test_LM(x, par0, intercept, maxit, maxit_l, tol, tol_l, step, th, nthreads, w));
    return rcpp_result_gen;
END_RCPP
}
// test_hypothesis
Rcpp::List test_hypothesis(const std::string method, const Eigen::Map<Eigen::VectorXd>& par0, const Eigen::Map<Eigen::MatrixXd>& x, const Eigen::Map<Eigen::MatrixXd>& lhs, const Eigen::Map<Eigen::VectorXd>& rhs, const int maxit, const int maxit_l, const double tol, const double tol_l, const Rcpp::Nullable<double> step, const Rcpp::Nullable<double> th, const Eigen::Map<Eigen::ArrayXd>& w);
RcppExport SEXP _melt_test_hypothesis(SEXP methodSEXP, SEXP par0SEXP, SEXP xSEXP, SEXP lhsSEXP, SEXP rhsSEXP, SEXP maxitSEXP, SEXP maxit_lSEXP, SEXP tolSEXP, SEXP tol_lSEXP, SEXP stepSEXP, SEXP thSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type par0(par0SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type lhs(lhsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type rhs(rhsSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit_l(maxit_lSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_l(tol_lSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<double> >::type step(stepSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<double> >::type th(thSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::ArrayXd>& >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(test_hypothesis(method, par0, x, lhs, rhs, maxit, maxit_l, tol, tol_l, step, th, w));
    return rcpp_result_gen;
END_RCPP
}
// test_multiple_hypotheses
Rcpp::List test_multiple_hypotheses(const double alpha, const Eigen::Map<Eigen::VectorXi>& q, const int m, const int M, const std::string method, const Eigen::Map<Eigen::VectorXd>& est, const Eigen::Map<Eigen::MatrixXd>& x, const Eigen::Map<Eigen::VectorXd>& rhs, const Eigen::Map<Eigen::MatrixXd>& lhs, const int maxit, const int maxit_l, const double tol, const double tol_l, const Rcpp::Nullable<double> step, const Rcpp::Nullable<double> th, const Eigen::Map<Eigen::ArrayXd>& w);
RcppExport SEXP _melt_test_multiple_hypotheses(SEXP alphaSEXP, SEXP qSEXP, SEXP mSEXP, SEXP MSEXP, SEXP methodSEXP, SEXP estSEXP, SEXP xSEXP, SEXP rhsSEXP, SEXP lhsSEXP, SEXP maxitSEXP, SEXP maxit_lSEXP, SEXP tolSEXP, SEXP tol_lSEXP, SEXP stepSEXP, SEXP thSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXi>& >::type q(qSEXP);
    Rcpp::traits::input_parameter< const int >::type m(mSEXP);
    Rcpp::traits::input_parameter< const int >::type M(MSEXP);
    Rcpp::traits::input_parameter< const std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type est(estSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type rhs(rhsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type lhs(lhsSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit_l(maxit_lSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_l(tol_lSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<double> >::type step(stepSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<double> >::type th(thSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::ArrayXd>& >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(test_multiple_hypotheses(alpha, q, m, M, method, est, x, rhs, lhs, maxit, maxit_l, tol, tol_l, step, th, w));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_melt_compute_EL", (DL_FUNC) &_melt_compute_EL, 7},
    {"_melt_compute_ELD", (DL_FUNC) &_melt_compute_ELD, 8},
    {"_melt_compute_bootstrap_calibration", (DL_FUNC) &_melt_compute_bootstrap_calibration, 12},
    {"_melt_compute_confidence_intervals", (DL_FUNC) &_melt_compute_confidence_intervals, 13},
    {"_melt_compute_confidence_region", (DL_FUNC) &_melt_compute_confidence_region, 15},
    {"_melt_compute_generic_EL", (DL_FUNC) &_melt_compute_generic_EL, 5},
    {"_melt_get_max_threads", (DL_FUNC) &_melt_get_max_threads, 0},
    {"_melt_get_rank", (DL_FUNC) &_melt_get_rank, 1},
    {"_melt_test_GLM", (DL_FUNC) &_melt_test_GLM, 12},
    {"_melt_test_LM", (DL_FUNC) &_melt_test_LM, 11},
    {"_melt_test_hypothesis", (DL_FUNC) &_melt_test_hypothesis, 12},
    {"_melt_test_multiple_hypotheses", (DL_FUNC) &_melt_test_multiple_hypotheses, 16},
    {NULL, NULL, 0}
};

RcppExport void R_init_melt(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
