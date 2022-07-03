#ifndef TEST_MULTIPLE_HYPOTHESES_UTILS_H_
#define TEST_MULTIPLE_HYPOTHESES_UTILS_H_

#include <RcppEigen.h>
#include <string>

Eigen::RowVectorXd rmvn(const Eigen::Ref<const Eigen::MatrixXd> &sqrt);

Eigen::MatrixXd w_mean(const Eigen::Ref<const Eigen::MatrixXd> &x,
                       const Eigen::Ref<const Eigen::VectorXd> &par);
Eigen::MatrixXd w_lm(const Eigen::Ref<const Eigen::MatrixXd> &x,
                     const Eigen::Ref<const Eigen::VectorXd> &par);
Eigen::MatrixXd w_gauss_log(const Eigen::Ref<const Eigen::MatrixXd> &x,
                            const Eigen::Ref<const Eigen::VectorXd> &par);
Eigen::MatrixXd w_gauss_inverse(
    const Eigen::Ref<const Eigen::MatrixXd> &x,
    const Eigen::Ref<const Eigen::VectorXd> &par);








Eigen::MatrixXd dg0_inv(const std::string method,
                        const Eigen::Ref<const Eigen::MatrixXd> &x,
                        const Eigen::Ref<const Eigen::VectorXd> &est);

Eigen::MatrixXd smat(const std::string method,
                     const Eigen::Ref<const Eigen::VectorXd> &est,
                     const Eigen::Ref<const Eigen::MatrixXd> &x);

Eigen::MatrixXd ahat(const Eigen::Ref<const Eigen::MatrixXd> &j,
                     const Eigen::Ref<const Eigen::MatrixXd> &w,
                     const Eigen::Ref<const Eigen::MatrixXd> &s);
#endif
