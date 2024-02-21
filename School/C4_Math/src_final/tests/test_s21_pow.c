#include "s21_tests.h"

START_TEST(test_s21_pow) {
  double pows[] = {1, 0.1, 7, 9.99, -0.4, -1.8, -1};
  double exps[] = {1, 0, 0.0, 4, -1};
  int pows_len = sizeof(pows) / sizeof(pows[0]);
  int exps_len = sizeof(exps) / sizeof(exps[0]);
  for (int i = 0; i < pows_len; i++) {
    for (int j = 0; j < exps_len; j++) {
      double vpow = pows[i], vexp = exps[j];
      ck_assert_ldouble_eq_tol(s21_pow(vpow, vexp), pow(vpow, vexp), 1e-06);
    }
  }

  ck_assert_ldouble_nan(s21_pow(-2.6, 3.45));
  ck_assert_ldouble_nan(s21_pow(-6.7758456, 5.45747));
  ck_assert_ldouble_nan(s21_pow(-5, 0.45));
  ck_assert_ldouble_nan(s21_pow(5.1234, S21_NAN));
  ck_assert_ldouble_nan(s21_pow(-1, 99.1));
  ck_assert_ldouble_nan(s21_pow(-2.6, 0.5));
  ck_assert_ldouble_nan(s21_pow(NAN, 2));
  ck_assert_ldouble_nan(s21_pow(NAN, INFINITY));
  ck_assert_ldouble_nan(s21_pow(INFINITY, NAN));

  ck_assert_ldouble_infinite(s21_pow(0, -5));
  ck_assert_ldouble_infinite(s21_pow(1.1, S21_INF_POS));
  ck_assert_ldouble_infinite(s21_pow(-1.1, S21_INF_POS));
  ck_assert_ldouble_infinite(s21_pow(0.7, S21_INF_NEG));
  ck_assert_ldouble_infinite(s21_pow(-0.7, S21_INF_NEG));
  ck_assert_ldouble_infinite(s21_pow(-1.1, S21_INF_POS));
  ck_assert_ldouble_infinite(s21_pow(2, INFINITY));
  ck_assert_ldouble_infinite(s21_pow(INFINITY, 2));
  ck_assert_ldouble_infinite(s21_pow(-INFINITY, 2));
  ck_assert_ldouble_infinite(s21_pow(2, 1e+10));

  ck_assert_ldouble_eq_tol(s21_pow(4, -2), pow(4, -2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(4.1, -2.5), pow(4.1, -2.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(1.1, S21_INF_NEG), pow(1.1, S21_INF_NEG),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-1.1, S21_INF_NEG), pow(-1.1, S21_INF_NEG),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(0.7, S21_INF_POS), pow(0.7, S21_INF_POS),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-0.7, S21_INF_POS), pow(-0.7, S21_INF_POS),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-1, S21_INF_POS), pow(-1, S21_INF_POS),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-1, S21_INF_NEG), pow(-1, S21_INF_NEG),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(2, 1e-10), pow(2, 1e-10), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(2, -1e-10), pow(2, -1e-10), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(2, -1e+10), pow(2, -1e+10), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(1e-5, 3), pow(1e-5, 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(0, 3), pow(0, 3), 1e-6);

  ck_assert_ldouble_eq_tol(s21_pow(2, -INFINITY), pow(2, -INFINITY), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(INFINITY, -2), pow(INFINITY, -2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-INFINITY, -2), pow(-INFINITY, -2), 1e-6);
}
END_TEST

Suite *pow_suite(void) {
  Suite *s = suite_create("pow");
  TCase *tc_pow = tcase_create("math");

  suite_add_tcase(s, tc_pow);
  tcase_add_test(tc_pow, test_s21_pow);
  return s;
}
