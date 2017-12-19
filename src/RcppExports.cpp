// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// ht_var
double ht_var(const double& p1p2, const double& p1, const double& p2, const double& y1, const double& y2);
RcppExport SEXP _estimatr_ht_var(SEXP p1p2SEXP, SEXP p1SEXP, SEXP p2SEXP, SEXP y1SEXP, SEXP y2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type p1p2(p1p2SEXP);
    Rcpp::traits::input_parameter< const double& >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< const double& >::type p2(p2SEXP);
    Rcpp::traits::input_parameter< const double& >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< const double& >::type y2(y2SEXP);
    rcpp_result_gen = Rcpp::wrap(ht_var(p1p2, p1, p2, y1, y2));
    return rcpp_result_gen;
END_RCPP
}
// ht_var_total
double ht_var_total(const Eigen::VectorXd& y, const Eigen::MatrixXd& p);
RcppExport SEXP _estimatr_ht_var_total(SEXP ySEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(ht_var_total(y, p));
    return rcpp_result_gen;
END_RCPP
}
// ht_covar_partial
double ht_covar_partial(const Eigen::VectorXd& y1, const Eigen::VectorXd& y0, const Eigen::MatrixXd& p10, const Eigen::VectorXd& p1, const Eigen::VectorXd& p0);
RcppExport SEXP _estimatr_ht_covar_partial(SEXP y1SEXP, SEXP y0SEXP, SEXP p10SEXP, SEXP p1SEXP, SEXP p0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type y0(y0SEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type p10(p10SEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type p0(p0SEXP);
    rcpp_result_gen = Rcpp::wrap(ht_covar_partial(y1, y0, p10, p1, p0));
    return rcpp_result_gen;
END_RCPP
}
// ht_var_partial
double ht_var_partial(const Eigen::VectorXd& y, const Eigen::MatrixXd& p);
RcppExport SEXP _estimatr_ht_var_partial(SEXP ySEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(ht_var_partial(y, p));
    return rcpp_result_gen;
END_RCPP
}
// ht_covar_total
double ht_covar_total(const Eigen::VectorXd& y0, const Eigen::VectorXd& y1, const Eigen::MatrixXd& p00, const Eigen::MatrixXd& p11, const Eigen::MatrixXd& pj);
RcppExport SEXP _estimatr_ht_covar_total(SEXP y0SEXP, SEXP y1SEXP, SEXP p00SEXP, SEXP p11SEXP, SEXP pjSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type y0(y0SEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type p00(p00SEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type p11(p11SEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type pj(pjSEXP);
    rcpp_result_gen = Rcpp::wrap(ht_covar_total(y0, y1, p00, p11, pj));
    return rcpp_result_gen;
END_RCPP
}
// joint_incl_pr
double joint_incl_pr(const double& pi, const double& pj, const int& same, const double& ntotal);
RcppExport SEXP _estimatr_joint_incl_pr(SEXP piSEXP, SEXP pjSEXP, SEXP sameSEXP, SEXP ntotalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type pi(piSEXP);
    Rcpp::traits::input_parameter< const double& >::type pj(pjSEXP);
    Rcpp::traits::input_parameter< const int& >::type same(sameSEXP);
    Rcpp::traits::input_parameter< const double& >::type ntotal(ntotalSEXP);
    rcpp_result_gen = Rcpp::wrap(joint_incl_pr(pi, pj, same, ntotal));
    return rcpp_result_gen;
END_RCPP
}
// gen_pr_matrix_complete
Eigen::MatrixXd gen_pr_matrix_complete(const Eigen::VectorXd& prs);
RcppExport SEXP _estimatr_gen_pr_matrix_complete(SEXP prsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type prs(prsSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_pr_matrix_complete(prs));
    return rcpp_result_gen;
END_RCPP
}
// ht_var_total2
double ht_var_total2(const Eigen::VectorXd& y, const Eigen::MatrixXd& p);
RcppExport SEXP _estimatr_ht_var_total2(SEXP ySEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(ht_var_total2(y, p));
    return rcpp_result_gen;
END_RCPP
}
// AtA
Eigen::MatrixXd AtA(const Eigen::MatrixXd& A);
RcppExport SEXP _estimatr_AtA(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(AtA(A));
    return rcpp_result_gen;
END_RCPP
}
// lm_solver
List lm_solver(Eigen::Map<Eigen::MatrixXd>& Xfull, const Eigen::Map<Eigen::VectorXd>& y, const Rcpp::Nullable<Rcpp::NumericMatrix>& Xunweighted, const Rcpp::Nullable<Rcpp::NumericVector>& weight, const double& weight_mean, const Rcpp::Nullable<Rcpp::IntegerVector>& cluster, const int& J, const bool& ci, const String type, const std::vector<bool>& which_covs, const bool& trychol);
RcppExport SEXP _estimatr_lm_solver(SEXP XfullSEXP, SEXP ySEXP, SEXP XunweightedSEXP, SEXP weightSEXP, SEXP weight_meanSEXP, SEXP clusterSEXP, SEXP JSEXP, SEXP ciSEXP, SEXP typeSEXP, SEXP which_covsSEXP, SEXP trycholSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd>& >::type Xfull(XfullSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericMatrix>& >::type Xunweighted(XunweightedSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericVector>& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< const double& >::type weight_mean(weight_meanSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::IntegerVector>& >::type cluster(clusterSEXP);
    Rcpp::traits::input_parameter< const int& >::type J(JSEXP);
    Rcpp::traits::input_parameter< const bool& >::type ci(ciSEXP);
    Rcpp::traits::input_parameter< const String >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const std::vector<bool>& >::type which_covs(which_covsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type trychol(trycholSEXP);
    rcpp_result_gen = Rcpp::wrap(lm_solver(Xfull, y, Xunweighted, weight, weight_mean, cluster, J, ci, type, which_covs, trychol));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_estimatr_ht_var", (DL_FUNC) &_estimatr_ht_var, 5},
    {"_estimatr_ht_var_total", (DL_FUNC) &_estimatr_ht_var_total, 2},
    {"_estimatr_ht_covar_partial", (DL_FUNC) &_estimatr_ht_covar_partial, 5},
    {"_estimatr_ht_var_partial", (DL_FUNC) &_estimatr_ht_var_partial, 2},
    {"_estimatr_ht_covar_total", (DL_FUNC) &_estimatr_ht_covar_total, 5},
    {"_estimatr_joint_incl_pr", (DL_FUNC) &_estimatr_joint_incl_pr, 4},
    {"_estimatr_gen_pr_matrix_complete", (DL_FUNC) &_estimatr_gen_pr_matrix_complete, 1},
    {"_estimatr_ht_var_total2", (DL_FUNC) &_estimatr_ht_var_total2, 2},
    {"_estimatr_AtA", (DL_FUNC) &_estimatr_AtA, 1},
    {"_estimatr_lm_solver", (DL_FUNC) &_estimatr_lm_solver, 11},
    {NULL, NULL, 0}
};

RcppExport void R_init_estimatr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
