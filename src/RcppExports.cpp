// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rtmvnorm_gibbs_cpp
NumericVector rtmvnorm_gibbs_cpp(const NumericMatrix& P, const NumericVector& sd, const NumericVector& lower, const NumericVector& upper, const LogicalVector& fixed, NumericVector& x, int n_sim, int burn_in);
RcppExport SEXP _LTFHPlus_rtmvnorm_gibbs_cpp(SEXP PSEXP, SEXP sdSEXP, SEXP lowerSEXP, SEXP upperSEXP, SEXP fixedSEXP, SEXP xSEXP, SEXP n_simSEXP, SEXP burn_inSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type P(PSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< const LogicalVector& >::type fixed(fixedSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n_sim(n_simSEXP);
    Rcpp::traits::input_parameter< int >::type burn_in(burn_inSEXP);
    rcpp_result_gen = Rcpp::wrap(rtmvnorm_gibbs_cpp(P, sd, lower, upper, fixed, x, n_sim, burn_in));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_LTFHPlus_rtmvnorm_gibbs_cpp", (DL_FUNC) &_LTFHPlus_rtmvnorm_gibbs_cpp, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_LTFHPlus(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
