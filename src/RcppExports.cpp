// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// test_ibd
Rcpp::List test_ibd(const arma::mat& x, const arma::mat& c, const arma::mat& L, const arma::vec& rhs, const int maxit, const double abstol);
RcppExport SEXP _elmulttest_test_ibd(SEXP xSEXP, SEXP cSEXP, SEXP LSEXP, SEXP rhsSEXP, SEXP maxitSEXP, SEXP abstolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type c(cSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type rhs(rhsSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const double >::type abstol(abstolSEXP);
    rcpp_result_gen = Rcpp::wrap(test_ibd(x, c, L, rhs, maxit, abstol));
    return rcpp_result_gen;
END_RCPP
}
// pairwise_ibd
Rcpp::List pairwise_ibd(const arma::mat& x, const arma::mat& c, const bool interval, const int B, const double level, std::string method, const bool vcov_adj, const bool cheat, const bool approx_lambda, const int ncores, const int maxit, const double abstol);
RcppExport SEXP _elmulttest_pairwise_ibd(SEXP xSEXP, SEXP cSEXP, SEXP intervalSEXP, SEXP BSEXP, SEXP levelSEXP, SEXP methodSEXP, SEXP vcov_adjSEXP, SEXP cheatSEXP, SEXP approx_lambdaSEXP, SEXP ncoresSEXP, SEXP maxitSEXP, SEXP abstolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type c(cSEXP);
    Rcpp::traits::input_parameter< const bool >::type interval(intervalSEXP);
    Rcpp::traits::input_parameter< const int >::type B(BSEXP);
    Rcpp::traits::input_parameter< const double >::type level(levelSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const bool >::type vcov_adj(vcov_adjSEXP);
    Rcpp::traits::input_parameter< const bool >::type cheat(cheatSEXP);
    Rcpp::traits::input_parameter< const bool >::type approx_lambda(approx_lambdaSEXP);
    Rcpp::traits::input_parameter< const int >::type ncores(ncoresSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const double >::type abstol(abstolSEXP);
    rcpp_result_gen = Rcpp::wrap(pairwise_ibd(x, c, interval, B, level, method, vcov_adj, cheat, approx_lambda, ncores, maxit, abstol));
    return rcpp_result_gen;
END_RCPP
}
// el_mean
Rcpp::List el_mean(arma::rowvec theta, arma::mat x, int maxit, double abstol);
RcppExport SEXP _elmulttest_el_mean(SEXP thetaSEXP, SEXP xSEXP, SEXP maxitSEXP, SEXP abstolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< double >::type abstol(abstolSEXP);
    rcpp_result_gen = Rcpp::wrap(el_mean(theta, x, maxit, abstol));
    return rcpp_result_gen;
END_RCPP
}
// el_mean2
Rcpp::List el_mean2(const arma::vec& theta, const arma::mat& x, const int maxit, const double abstol);
RcppExport SEXP _elmulttest_el_mean2(SEXP thetaSEXP, SEXP xSEXP, SEXP maxitSEXP, SEXP abstolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const double >::type abstol(abstolSEXP);
    rcpp_result_gen = Rcpp::wrap(el_mean2(theta, x, maxit, abstol));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_elmulttest_test_ibd", (DL_FUNC) &_elmulttest_test_ibd, 6},
    {"_elmulttest_pairwise_ibd", (DL_FUNC) &_elmulttest_pairwise_ibd, 12},
    {"_elmulttest_el_mean", (DL_FUNC) &_elmulttest_el_mean, 4},
    {"_elmulttest_el_mean2", (DL_FUNC) &_elmulttest_el_mean2, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_elmulttest(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
