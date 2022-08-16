//  Copyright 2022 jewfishc, trenamim, johniety
#include "s21_test.h"

//  TEST_ABS
START_TEST(s21_abs_min) {
    int a = INT_MIN;
    ck_assert_int_eq(s21_abs(a), abs(a));
} END_TEST

START_TEST(s21_abs_minus100) {
    int a = -100;
    ck_assert_int_eq(s21_abs(a), abs(a));
} END_TEST

START_TEST(s21_abs_minus2) {
    int a = -2;
    ck_assert_int_eq(s21_abs(a), abs(a));
} END_TEST

START_TEST(s21_abs_minus1) {
    int a = -1;
    ck_assert_int_eq(s21_abs(a), abs(a));
} END_TEST

START_TEST(s21_abs_minuszero) {
    int a = -0;
    ck_assert_int_eq(s21_abs(a), abs(a));
} END_TEST

START_TEST(s21_abs_zero) {
    int a = 0;
    ck_assert_int_eq(s21_abs(a), abs(a));
} END_TEST

START_TEST(s21_abs_1) {
    int a = 1;
    ck_assert_int_eq(s21_abs(a), abs(a));
} END_TEST

START_TEST(s21_abs_2) {
    int a = 2;
    ck_assert_int_eq(s21_abs(a), abs(a));
} END_TEST

START_TEST(s21_abs_100) {
    int a = 2;
    ck_assert_int_eq(s21_abs(a), abs(a));
} END_TEST

START_TEST(s21_abs_max) {
    int a = INT_MAX;
    ck_assert_int_eq(s21_abs(a), abs(a));
} END_TEST

//  TEST_ACOS
START_TEST(s21_acos_minus09) {
    double a = -0.9;
    check(s21_acos(a), acos(a));
} END_TEST

START_TEST(s21_acos_minus05) {
    double a = -0.5;
    check(s21_acos(a), acos(a));
} END_TEST

START_TEST(s21_acos_minuszero) {
    double a = -0.0;
    check(s21_acos(a), acos(a));
} END_TEST

START_TEST(s21_acos_zero) {
    double a = 0;
    check(s21_acos(a), acos(a));
} END_TEST

START_TEST(s21_acos_min) {
    double a = DBL_MIN;
    check(s21_acos(a), acos(a));
} END_TEST

START_TEST(s21_acos_05) {
    double a = 0.5;
    check(s21_acos(a), acos(a));
} END_TEST

START_TEST(s21_acos_09) {
    double a = 0.9;
    check(s21_acos(a), acos(a));
} END_TEST

START_TEST(s21_acos_max) {
    double a = DBL_MAX;
    check(s21_acos(a), acos(a));
} END_TEST

START_TEST(s21_acos_minus1) {
    double a = -1.0;
    check(s21_acos(a), acos(a));
} END_TEST

START_TEST(s21_acos_1) {
    double a = 1.0;
    check(s21_acos(a), acos(a));
} END_TEST

//  TEST_ASIN
START_TEST(s21_asin_minus09) {
    double a = -0.9;
    check(s21_asin(a), asin(a));
} END_TEST

START_TEST(s21_asin_minus05) {
    double a = -0.5;
    check(s21_asin(a), asin(a));
} END_TEST

START_TEST(s21_asin_minuszero) {
    double a = -0.0;
    check(s21_asin(a), asin(a));
} END_TEST

START_TEST(s21_asin_zero) {
    double a = 0.0;
    check(s21_asin(a), asin(a));
} END_TEST

START_TEST(s21_asin_min) {
    double a = DBL_MIN;
    check(s21_asin(a), asin(a));
} END_TEST

START_TEST(s21_asin_05) {
    double a = 0.5;
    check(s21_asin(a), asin(a));
} END_TEST

START_TEST(s21_asin_1) {
    double a = 1.0;
    check(s21_asin(a), asin(a));
} END_TEST

START_TEST(s21_asin_09) {
    double a = 0.9;
    check(s21_asin(a), asin(a));
} END_TEST

START_TEST(s21_asin_max) {
    double a = DBL_MAX;
    check(s21_asin(a), asin(a));
} END_TEST

START_TEST(s21_asin_minus1) {
    double a = -1.0;
    check(s21_asin(a), asin(a));
} END_TEST

//  TEST_ATAN
START_TEST(s21_atan_minus2) {
    double a = -2.0;
    check(s21_atan(a), atan(a));
} END_TEST

START_TEST(s21_atan_minus1) {
    double a = -1.0;
    check(s21_atan(a), atan(a));
} END_TEST

START_TEST(s21_atan_minus0dot5) {
    double a = -0.5;
    check(s21_atan(a), atan(a));
} END_TEST

START_TEST(s21_atan_minuszero) {
    double a = -0.0;
    check(s21_atan(a), atan(a));
} END_TEST

START_TEST(s21_atan_zero) {
    double a = 0.0;
    check(s21_atan(a), atan(a));
} END_TEST

START_TEST(s21_atan_min) {
    double a = DBL_MIN;
    check(s21_atan(a), atan(a));
} END_TEST

START_TEST(s21_atan_0dot5) {
    double a = 0.5;
    check(s21_atan(a), atan(a));
} END_TEST

START_TEST(s21_atan_1) {
    double a = 1.0;
    check(s21_atan(a), atan(a));
} END_TEST

START_TEST(s21_atan_2) {
    double a = 2.0;
    check(s21_atan(a), atan(a));
} END_TEST

START_TEST(s21_atan_1dot5) {
    double a = 1.5;
    check(s21_atan(a), atan(a));
} END_TEST

START_TEST(s21_atan_minus1dot5) {
    double a = -1.5;
    check(s21_atan(a), atan(a));
} END_TEST

//  TEST_CEIL
START_TEST(s21_ceil_minus2) {
    double a = -2.0;
    check(s21_ceil(a), ceil(a));
} END_TEST

START_TEST(s21_ceil_minus1) {
    double a = -1.0;
    check(s21_ceil(a), ceil(a));
} END_TEST

START_TEST(s21_ceil_minus0dot5) {
    double a = -0.5;
    check(s21_ceil(a), ceil(a));
} END_TEST

START_TEST(s21_ceil_minuszero) {
    double a = -0.0;
    check(s21_ceil(a), ceil(a));
} END_TEST

START_TEST(s21_ceil_zero) {
    double a = 0.0;
    check(s21_ceil(a), ceil(a));
} END_TEST

START_TEST(s21_ceil_min) {
    double a = DBL_MIN;
    check(s21_ceil(a), ceil(a));
} END_TEST

START_TEST(s21_ceil_0dot5) {
    double a = 0.5;
    check(s21_ceil(a), ceil(a));
} END_TEST

START_TEST(s21_ceil_1) {
    double a = 1.0;
    check(s21_ceil(a), ceil(a));
} END_TEST

START_TEST(s21_ceil_2) {
    double a = 2.0;
    check(s21_ceil(a), ceil(a));
} END_TEST

START_TEST(s21_ceil_max) {
    double a = DBL_MAX;
    check(s21_ceil(a), ceil(a));
} END_TEST

//  TEST_COS
START_TEST(s21_cos_minuspi) {
    double a = -1.0 * S21_PI;
    check(s21_cos(a), cos(a));
} END_TEST

START_TEST(s21_cos_minuspi2) {
    double a = -1.0 * S21_PI / 2;
    check(s21_cos(a), cos(a));
} END_TEST

START_TEST(s21_cos_minuspi4) {
    double a = -1.0 * S21_PI / 4;
    check(s21_cos(a), cos(a));
} END_TEST

START_TEST(s21_cos_minuszero) {
    double a = -0.0;
    check(s21_cos(a), cos(a));
} END_TEST

START_TEST(s21_cos_zero) {
    double a = 0.0;
    check(s21_cos(a), cos(a));
} END_TEST

START_TEST(s21_cos_min) {
    double a = DBL_MIN;
    check(s21_cos(a), cos(a));
} END_TEST

START_TEST(s21_cos_pi4) {
    double a = S21_PI / 4;
    check(s21_cos(a), cos(a));
} END_TEST

START_TEST(s21_cos_pi2) {
    double a = S21_PI / 2;
    check(s21_cos(a), cos(a));
} END_TEST

START_TEST(s21_cos_pi) {
    double a = S21_PI;
    check(s21_cos(a), cos(a));
} END_TEST

//  TEST_EXP
START_TEST(s21_exp_minus10) {
    double a = -10;
    check(s21_exp(a), exp(a));
} END_TEST

START_TEST(s21_exp_minus1) {
    double a = -1;
    check(s21_exp(a), exp(a));
} END_TEST

START_TEST(s21_exp_minus05) {
    double a = -0.5;
    check(s21_exp(a), exp(a));
} END_TEST

START_TEST(s21_exp_minuszero) {
    double a = -0.0;
    check(s21_exp(a), exp(a));
} END_TEST

START_TEST(s21_exp_zero) {
    double a = 0.0;
    check(s21_exp(a), exp(a));
} END_TEST

START_TEST(s21_exp_min) {
    double a = DBL_MIN;
    check(s21_exp(a), exp(a));
} END_TEST

START_TEST(s21_exp_05) {
    double a = 0.5;
    check(s21_exp(a), exp(a));
} END_TEST

START_TEST(s21_exp_1) {
    double a = 1;
    check(s21_exp(a), exp(a));
} END_TEST

START_TEST(s21_exp_10) {
    double a = 10;
    check(s21_exp(a), exp(a));
} END_TEST

START_TEST(s21_exp_max) {
    double a = DBL_MAX;
    check(s21_exp(a), exp(a));
} END_TEST

//  TEST_FABS
START_TEST(s21_fabs_minus2) {
    double a = -2.0;
    check(s21_fabs(a), fabs(a));
} END_TEST

START_TEST(s21_fabs_minus1) {
    double a = -1.0;
    check(s21_fabs(a), fabs(a));
} END_TEST

START_TEST(s21_fabs_minus0dot5) {
    double a = -0.5;
    check(s21_fabs(a), fabs(a));
} END_TEST

START_TEST(s21_fabs_minuszero) {
    double a = -0.0;
    check(s21_fabs(a), fabs(a));
} END_TEST

START_TEST(s21_fabs_zero) {
    double a = 0.0;
    check(s21_fabs(a), fabs(a));
} END_TEST

START_TEST(s21_fabs_min) {
    double a = DBL_MIN;
    check(s21_fabs(a), fabs(a));
} END_TEST

START_TEST(s21_fabs_0dot5) {
    double a = 0.5;
    check(s21_fabs(a), fabs(a));
} END_TEST

START_TEST(s21_fabs_1) {
    double a = 1.0;
    check(s21_fabs(a), fabs(a));
} END_TEST

START_TEST(s21_fabs_2) {
    double a = 2.0;
    check(s21_fabs(a), fabs(a));
} END_TEST

START_TEST(s21_fabs_max) {
    double a = DBL_MAX;
    check(s21_fabs(a), fabs(a));
} END_TEST

//  TEST_FLOOR
START_TEST(s21_floor_minus2) {
    double a = -2.0;
    check(s21_floor(a), floor(a));
} END_TEST

START_TEST(s21_floor_minus1) {
    double a = -1.0;
    check(s21_floor(a), floor(a));
} END_TEST

START_TEST(s21_floor_minus0dot5) {
    double a = -0.5;
    check(s21_floor(a), floor(a));
} END_TEST

START_TEST(s21_floor_minuszero) {
    double a = -0.0;
    check(s21_floor(a), floor(a));
} END_TEST

START_TEST(s21_floor_zero) {
    double a = 0.0;
    check(s21_floor(a), floor(a));
} END_TEST

START_TEST(s21_floor_min) {
    double a = DBL_MIN;
    check(s21_floor(a), floor(a));
} END_TEST

START_TEST(s21_floor_0dot5) {
    double a = 0.5;
    check(s21_floor(a), floor(a));
} END_TEST

START_TEST(s21_floor_1) {
    double a = 1.0;
    check(s21_floor(a), floor(a));
} END_TEST

START_TEST(s21_floor_2) {
    double a = 2.0;
    check(s21_floor(a), floor(a));
} END_TEST

//  TEST_FMOD
START_TEST(s21_fmod_25_minus1) {
    double a = 2.5;
    double b = -1.0;
    check(s21_fmod(a, b), fmod(a, b));
} END_TEST

START_TEST(s21_fmod_25_0) {
    double a = 2.5;
    double b = 0.0;
    check(s21_fmod(a, b), fmod(a, b));
} END_TEST

START_TEST(s21_fmod_25_1) {
    double a = 2.5;
    double b = 1.0;
    check(s21_fmod(a, b), fmod(a, b));
} END_TEST

START_TEST(s21_fmod_25_min) {
    double a = 2.5;
    double b = DBL_MIN;
    check(s21_fmod(a, b), fmod(a, b));
} END_TEST

START_TEST(s21_fmod_25_max) {
    double a = 2.5;
    double b = DBL_MAX;
    check(s21_fmod(a, b), fmod(a, b));
} END_TEST

START_TEST(s21_fmod_minus25_21) {
    double a = -2.5;
    double b = 2.1;
    check(s21_fmod(a, b), fmod(a, b));
} END_TEST

START_TEST(s21_fmod_0_25) {
    double a = 0.0;
    double b = 2.5;
    check(s21_fmod(a, b), fmod(a, b));
} END_TEST

START_TEST(s21_fmod_min_25) {
    double a = DBL_MIN;
    double b = 2.5;
    check(s21_fmod(a, b), fmod(a, b));
} END_TEST

START_TEST(s21_fmod_max_25) {
    double a = DBL_MAX;
    double b = 2.5;
    check(s21_fmod(a, b), fmod(a, b));
} END_TEST

START_TEST(s21_fmod_0_0) {
    double a = 0.0;
    double b = 0.0;
    check(s21_fmod(a, b), fmod(a, b));
} END_TEST

//  TEST_LOG
START_TEST(s21_log_num_1) {
    double a = 1.234567;
    check(s21_log(a), log(a));
} END_TEST

START_TEST(s21_log_123456) {
    double a = 123456.7;
    check(s21_log(a), log(a));
} END_TEST

START_TEST(s21_log_min) {
    double a = DBL_MIN;
    check(s21_log(a), log(a));
} END_TEST

START_TEST(s21_log_05) {
    double a = 0.5;
    check(s21_log(a), log(a));
} END_TEST

START_TEST(s21_log_1) {
    double a = 1.0;
    check(s21_log(a), log(a));
} END_TEST

START_TEST(s21_log_225) {
    double a = 2.25;
    check(s21_log(a), log(a));
} END_TEST

START_TEST(s21_log_10) {
    double a = 10.0;
    check(s21_log(a), log(a));
} END_TEST

START_TEST(s21_log_100) {
    double a = 100.0;
    check(s21_log(a), log(a));
} END_TEST

START_TEST(s21_log_max) {
    double a = DBL_MAX;
    check(s21_log(a), log(a));
} END_TEST

//  TEST_POW
START_TEST(s21_pow_2_minus1) {
    double a = 2.0;
    double b = -1.0;
    check(s21_pow(a, b), pow(a, b));
} END_TEST

START_TEST(s21_pow_2_0) {
    double a = 2.0;
    double b = 0.0;
    check(s21_pow(a, b), pow(a, b));
} END_TEST

START_TEST(s21_pow_2_1) {
    double a = 2.0;
    double b = 1.0;
    check(s21_pow(a, b), pow(a, b));
} END_TEST

START_TEST(s21_pow_2_min) {
    double a = 2.0;
    double b = DBL_MIN;
    check(s21_pow(a, b), pow(a, b));
} END_TEST

START_TEST(s21_pow_2_max) {
    double a = 2.0;
    double b = DBL_MAX;
    check(s21_pow(a, b), pow(a, b));
} END_TEST

START_TEST(s21_pow_minus1_2) {
    double a = -1.0;
    double b = 2.0;
    check(s21_pow(a, b), pow(a, b));
} END_TEST

START_TEST(s21_pow_0_2) {
    double a = 0.0;
    double b = 2.0;
    check(s21_pow(a, b), pow(a, b));
} END_TEST

START_TEST(s21_pow_min_2) {
    double a = DBL_MIN;
    double b = 2.0;
    check(s21_pow(a, b), pow(a, b));
} END_TEST

START_TEST(s21_pow_max_2) {
    double a = DBL_MAX;
    double b = 2.0;
    check(s21_pow(a, b), pow(a, b));
} END_TEST

START_TEST(s21_pow_0_0) {
    double a = 0.0;
    double b = 0.0;
    check(s21_pow(a, b), pow(a, b));
} END_TEST

//  TEST_SIN
START_TEST(s21_sin_minuspi) {
    double a = -1 * S21_PI;
    check(s21_sin(a), sin(a));
} END_TEST

START_TEST(s21_sin_minuspi2) {
    double a = -1 * S21_PI / 2;
    check(s21_sin(a), sin(a));
} END_TEST

START_TEST(s21_sin_minuspi4) {
    double a = -1 * S21_PI / 4;
    check(s21_sin(a), sin(a));
} END_TEST

START_TEST(s21_sin_minuszero) {
    double a = -0.0;
    check(s21_sin(a), sin(a));
} END_TEST

START_TEST(s21_sin_zero) {
    double a = 0.0;
    check(s21_sin(a), sin(a));
} END_TEST

START_TEST(s21_sin_min) {
    double a = DBL_MIN;
    check(s21_sin(a), sin(a));
} END_TEST

START_TEST(s21_sin_pi4) {
    double a = S21_PI / 4;
    check(s21_sin(a), sin(a));
} END_TEST

START_TEST(s21_sin_pi2) {
    double a = S21_PI / 2;
    check(s21_sin(a), sin(a));
} END_TEST

START_TEST(s21_sin_pi) {
    double a = S21_PI;
    check(s21_sin(a), sin(a));
} END_TEST

//  TEST_TAN
START_TEST(s21_tan_minuspi) {
    double a = -1 * S21_PI;
    check(s21_tan(a), tan(a));
} END_TEST

START_TEST(s21_tan_minus2) {
    double a = -2;
    check(s21_tan(a), tan(a));
} END_TEST

START_TEST(s21_tan_minuspi4) {
    double a = -1 * S21_PI / 4;
    check(s21_tan(a), tan(a));
} END_TEST

START_TEST(s21_tan_minuszero) {
    double a = -0.0;
    check(s21_tan(a), tan(a));
} END_TEST

START_TEST(s21_tan_zero) {
    double a = 0.0;
    check(s21_tan(a), tan(a));
} END_TEST

START_TEST(s21_tan_min) {
    double a = DBL_MIN;
    check(s21_tan(a), tan(a));
} END_TEST

START_TEST(s21_tan_pi4) {
    double a = S21_PI / 4;
    check(s21_tan(a), tan(a));
} END_TEST

START_TEST(s21_tan_2) {
    double a = 2;
    check(s21_tan(a), tan(a));
} END_TEST

START_TEST(s21_tan_pi) {
    double a = S21_PI;
    check(s21_tan(a), tan(a));
} END_TEST

//  TEST_SQRT
START_TEST(s21_sqrt_121) {
    double a = 121;
    check(s21_sqrt(a), sqrt(a));
} END_TEST

START_TEST(s21_sqrt_minuszero) {
    double a = -0.0;
    check(s21_sqrt(a), sqrt(a));
} END_TEST

START_TEST(s21_sqrt_zero) {
    double a = 0.0;
    check(s21_sqrt(a), sqrt(a));
} END_TEST

START_TEST(s21_sqrt_min) {
    double a = DBL_MIN;
    check(s21_sqrt(a), sqrt(a));
} END_TEST

START_TEST(s21_sqrt_05) {
    double a = 0.5;
    check(s21_sqrt(a), sqrt(a));
} END_TEST

START_TEST(s21_sqrt_1) {
    double a = 1.0;
    check(s21_sqrt(a), sqrt(a));
} END_TEST

START_TEST(s21_sqrt_225) {
    double a = 2.25;
    check(s21_sqrt(a), sqrt(a));
} END_TEST

START_TEST(s21_sqrt_10) {
    double a = 10.0;
    check(s21_sqrt(a), sqrt(a));
} END_TEST

START_TEST(s21_sqrt_100) {
    double a = 100.0;
    check(s21_sqrt(a), sqrt(a));
} END_TEST

START_TEST(s21_sqrt_max) {
    double a = DBL_MAX;
    check(s21_sqrt(a), sqrt(a));
} END_TEST

void check(long double s21, long double math) {
    if (isnan(s21) && isnan(math)) {            // NAN
        ck_assert_double_nan(s21);
        ck_assert_double_nan(math);
    } else if (s21 == math) {                   // INF
        ck_assert_double_eq(s21, math);
    } else if (s21 > TOLERANCE * ACCURACY) {    // BIG NUMBER
        long double s21_a = s21 / ACCURACY;
        long double math_a = s21 / ACCURACY;
        ck_assert_double_eq_tol(s21_a, math_a, TOLERANCE);
    } else {                                    // SMALL NUMBER
        ck_assert_double_eq_tol(s21, math, TOLERANCE);
    }
}

Suite *add_test(Suite *suite, const TTest *test) {
    TCase *test_case;
    test_case = tcase_create(test->name);
    tcase_add_test(test_case, test);
    suite_add_tcase(suite, test_case);
    return suite;
}

int main(void) {
    SRunner *runner;
    runner = srunner_create(suite_create(""));

    test_s21_abs(runner);
    test_s21_acos(runner);
    test_s21_asin(runner);
    test_s21_atan(runner);
    test_s21_ceil(runner);
    test_s21_cos(runner);
    test_s21_exp(runner);
    test_s21_fabs(runner);
    test_s21_floor(runner);
    test_s21_fmod(runner);
    test_s21_log(runner);
    test_s21_pow(runner);
    test_s21_sin(runner);
    test_s21_sqrt(runner);
    test_s21_tan(runner);

    srunner_set_fork_status(runner, CK_NOFORK);
    srunner_set_log(runner, "a.test.log");
    srunner_run_all(runner, CK_NORMAL);  // CK_SILENT CK_MINIMAL CK_NORMAL CK_VERBOSE
    srunner_free(runner);
    return 0;
}

void test_s21_abs(SRunner *runner) {
    Suite *tests = suite_create("s21_abs");
    tests = add_test(tests, s21_abs_min);
    tests = add_test(tests, s21_abs_minus100);
    tests = add_test(tests, s21_abs_minus2);
    tests = add_test(tests, s21_abs_minus1);
    tests = add_test(tests, s21_abs_minuszero);
    tests = add_test(tests, s21_abs_zero);
    tests = add_test(tests, s21_abs_1);
    tests = add_test(tests, s21_abs_2);
    tests = add_test(tests, s21_abs_100);
    tests = add_test(tests, s21_abs_max);
    srunner_add_suite(runner, tests);
}

void test_s21_acos(SRunner *runner) {
    Suite *tests = suite_create("s21_acos");
    tests = add_test(tests, s21_acos_minus09);
    tests = add_test(tests, s21_acos_minus1);
    tests = add_test(tests, s21_acos_minus05);
    tests = add_test(tests, s21_acos_minuszero);
    tests = add_test(tests, s21_acos_zero);
    tests = add_test(tests, s21_acos_min);
    tests = add_test(tests, s21_acos_05);
    tests = add_test(tests, s21_acos_09);
    tests = add_test(tests, s21_acos_max);
    tests = add_test(tests, s21_acos_1);
    srunner_add_suite(runner, tests);
}

void test_s21_asin(SRunner *runner) {
    Suite *tests = suite_create("s21_asin");
    tests = add_test(tests, s21_asin_minus09);
    tests = add_test(tests, s21_asin_minus1);
    tests = add_test(tests, s21_asin_minus05);
    tests = add_test(tests, s21_asin_minuszero);
    tests = add_test(tests, s21_asin_zero);
    tests = add_test(tests, s21_asin_min);
    tests = add_test(tests, s21_asin_05);
    tests = add_test(tests, s21_asin_09);
    tests = add_test(tests, s21_asin_max);
    tests = add_test(tests, s21_asin_1);
    srunner_add_suite(runner, tests);
}

void test_s21_atan(SRunner *runner) {
    Suite *tests = suite_create("s21_atan");
    tests = add_test(tests, s21_atan_minus2);
    tests = add_test(tests, s21_atan_minus1);
    tests = add_test(tests, s21_atan_minus0dot5);
    tests = add_test(tests, s21_atan_minuszero);
    tests = add_test(tests, s21_atan_zero);
    tests = add_test(tests, s21_atan_min);
    tests = add_test(tests, s21_atan_0dot5);
    tests = add_test(tests, s21_atan_1);
    tests = add_test(tests, s21_atan_2);
    tests = add_test(tests, s21_atan_1dot5);
    tests = add_test(tests, s21_atan_minus1dot5);
    srunner_add_suite(runner, tests);
}

void test_s21_ceil(SRunner *runner) {
    Suite *tests = suite_create("s21_ceil");
    tests = add_test(tests, s21_ceil_minus2);
    tests = add_test(tests, s21_ceil_minus1);
    tests = add_test(tests, s21_ceil_minus0dot5);
    tests = add_test(tests, s21_ceil_minuszero);
    tests = add_test(tests, s21_ceil_zero);
    tests = add_test(tests, s21_ceil_min);
    tests = add_test(tests, s21_ceil_0dot5);
    tests = add_test(tests, s21_ceil_1);
    tests = add_test(tests, s21_ceil_2);
    tests = add_test(tests, s21_ceil_max);
    srunner_add_suite(runner, tests);
}

void test_s21_cos(SRunner *runner) {
    Suite *tests = suite_create("s21_cos");
    tests = add_test(tests, s21_cos_minuspi);
    tests = add_test(tests, s21_cos_minuspi2);
    tests = add_test(tests, s21_cos_minuspi4);
    tests = add_test(tests, s21_cos_minuszero);
    tests = add_test(tests, s21_cos_zero);
    tests = add_test(tests, s21_cos_min);
    tests = add_test(tests, s21_cos_pi4);
    tests = add_test(tests, s21_cos_pi2);
    tests = add_test(tests, s21_cos_pi);
    srunner_add_suite(runner, tests);
}

void test_s21_exp(SRunner *runner) {
    Suite *tests = suite_create("s21_exp");
    tests = add_test(tests, s21_exp_minus10);
    tests = add_test(tests, s21_exp_minus1);
    tests = add_test(tests, s21_exp_minus05);
    tests = add_test(tests, s21_exp_minuszero);
    tests = add_test(tests, s21_exp_zero);
    tests = add_test(tests, s21_exp_min);
    tests = add_test(tests, s21_exp_05);
    tests = add_test(tests, s21_exp_1);
    tests = add_test(tests, s21_exp_10);
    tests = add_test(tests, s21_exp_max);
    srunner_add_suite(runner, tests);
}

void test_s21_fabs(SRunner *runner) {
    Suite *tests = suite_create("s21_fabs");
    tests = add_test(tests, s21_fabs_minus2);
    tests = add_test(tests, s21_fabs_minus1);
    tests = add_test(tests, s21_fabs_minus0dot5);
    tests = add_test(tests, s21_fabs_minuszero);
    tests = add_test(tests, s21_fabs_zero);
    tests = add_test(tests, s21_fabs_min);
    tests = add_test(tests, s21_fabs_0dot5);
    tests = add_test(tests, s21_fabs_1);
    tests = add_test(tests, s21_fabs_2);
    tests = add_test(tests, s21_fabs_max);
    srunner_add_suite(runner, tests);
}

void test_s21_floor(SRunner *runner) {
    Suite *tests = suite_create("s21_floor");
    tests = add_test(tests, s21_floor_minus2);
    tests = add_test(tests, s21_floor_minus1);
    tests = add_test(tests, s21_floor_minus0dot5);
    tests = add_test(tests, s21_floor_minuszero);
    tests = add_test(tests, s21_floor_zero);
    tests = add_test(tests, s21_floor_min);
    tests = add_test(tests, s21_floor_0dot5);
    tests = add_test(tests, s21_floor_1);
    tests = add_test(tests, s21_floor_2);
    srunner_add_suite(runner, tests);
}

void test_s21_fmod(SRunner *runner) {
    Suite *tests = suite_create("s21_fmod");
    tests = add_test(tests, s21_fmod_25_minus1);
    tests = add_test(tests, s21_fmod_25_0);
    tests = add_test(tests, s21_fmod_25_1);
    tests = add_test(tests, s21_fmod_25_min);
    tests = add_test(tests, s21_fmod_25_max);
    tests = add_test(tests, s21_fmod_minus25_21);
    tests = add_test(tests, s21_fmod_0_25);
    tests = add_test(tests, s21_fmod_min_25);
    tests = add_test(tests, s21_fmod_max_25);
    tests = add_test(tests, s21_fmod_0_0);
    srunner_add_suite(runner, tests);
}

void test_s21_log(SRunner *runner) {
    Suite *tests = suite_create("s21_log");
    tests = add_test(tests, s21_log_num_1);
    tests = add_test(tests, s21_log_123456);
    tests = add_test(tests, s21_log_min);
    tests = add_test(tests, s21_log_05);
    tests = add_test(tests, s21_log_1);
    tests = add_test(tests, s21_log_225);
    tests = add_test(tests, s21_log_10);
    tests = add_test(tests, s21_log_100);
    tests = add_test(tests, s21_log_max);
    srunner_add_suite(runner, tests);
}

void test_s21_pow(SRunner *runner) {
    Suite *tests = suite_create("s21_pow");
    tests = add_test(tests, s21_pow_2_minus1);
    tests = add_test(tests, s21_pow_2_0);
    tests = add_test(tests, s21_pow_2_1);
    tests = add_test(tests, s21_pow_2_min);
    tests = add_test(tests, s21_pow_2_max);
    tests = add_test(tests, s21_pow_minus1_2);
    tests = add_test(tests, s21_pow_0_2);
    tests = add_test(tests, s21_pow_min_2);
    tests = add_test(tests, s21_pow_max_2);
    tests = add_test(tests, s21_pow_0_0);
    srunner_add_suite(runner, tests);
}

void test_s21_sin(SRunner *runner) {
    Suite *tests = suite_create("s21_sin");
    tests = add_test(tests, s21_sin_minuspi);
    tests = add_test(tests, s21_sin_minuspi2);
    tests = add_test(tests, s21_sin_minuspi4);
    tests = add_test(tests, s21_sin_minuszero);
    tests = add_test(tests, s21_sin_zero);
    tests = add_test(tests, s21_sin_min);
    tests = add_test(tests, s21_sin_pi4);
    tests = add_test(tests, s21_sin_pi2);
    tests = add_test(tests, s21_sin_pi);
    srunner_add_suite(runner, tests);
}

void test_s21_tan(SRunner *runner) {
    Suite *tests = suite_create("s21_tan");
    tests = add_test(tests, s21_tan_minuspi);
    tests = add_test(tests, s21_tan_minus2);
    tests = add_test(tests, s21_tan_minuspi4);
    tests = add_test(tests, s21_tan_minuszero);
    tests = add_test(tests, s21_tan_zero);
    tests = add_test(tests, s21_tan_min);
    tests = add_test(tests, s21_tan_pi4);
    tests = add_test(tests, s21_tan_2);
    tests = add_test(tests, s21_tan_pi);
    srunner_add_suite(runner, tests);
}

void test_s21_sqrt(SRunner *runner) {
    Suite *tests = suite_create("s21_sqrt");
    tests = add_test(tests, s21_sqrt_121);
    tests = add_test(tests, s21_sqrt_minuszero);
    tests = add_test(tests, s21_sqrt_zero);
    tests = add_test(tests, s21_sqrt_min);
    tests = add_test(tests, s21_sqrt_05);
    tests = add_test(tests, s21_sqrt_1);
    tests = add_test(tests, s21_sqrt_225);
    tests = add_test(tests, s21_sqrt_10);
    tests = add_test(tests, s21_sqrt_100);
    tests = add_test(tests, s21_sqrt_max);
    srunner_add_suite(runner, tests);
}
