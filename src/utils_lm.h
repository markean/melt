#ifndef EL_UTILS_lm_H_
#define EL_UTILS_lm_H_

#include "EL.h"
// #include <cli/progress.h>

Eigen::VectorXd gradient_nlogLR_lm(
    const Eigen::Ref<const Eigen::VectorXd>& lambda,
    const Eigen::Ref<const Eigen::MatrixXd>& g,
    const Eigen::Ref<const Eigen::MatrixXd>& x);

minEL test_lm(const Eigen::Ref<const Eigen::VectorXd>& beta0,
              const Eigen::Ref<const Eigen::MatrixXd>& x,
              const Eigen::Ref<const Eigen::VectorXd>& y,
              const Eigen::Ref<const Eigen::MatrixXd>& lhs,
              const Eigen::Ref<const Eigen::VectorXd>& rhs,
              const double threshold,
              const int maxit,
              const double abstol);
#endif