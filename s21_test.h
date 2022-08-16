//  Copyright 2022 jewfishc, trenamim, johniety
#ifndef SRC_S21_TEST_H_
#define SRC_S21_TEST_H_

#include <check.h>
#include <math.h>
#include <float.h>
#include "s21_math.h"

//  Общая проверяемая точность - 16 значащих цифр
#define ACCURACY 1e16

//  Проверяемая точность дробной части - максимум 6 знаков после запятой.
#define TOLERANCE 1e-06

void check(long double s21, long double math);
Suite *add_test(Suite *suite, const TTest *test);

void test_s21_abs(SRunner *runner);
void test_s21_acos(SRunner *runner);
void test_s21_asin(SRunner *runner);
void test_s21_atan(SRunner *runner);
void test_s21_ceil(SRunner *runner);
void test_s21_cos(SRunner *runner);
void test_s21_exp(SRunner *runner);
void test_s21_fabs(SRunner *runner);
void test_s21_floor(SRunner *runner);
void test_s21_fmod(SRunner *runner);
void test_s21_log(SRunner *runner);
void test_s21_pow(SRunner *runner);
void test_s21_sin(SRunner *runner);
void test_s21_sqrt(SRunner *runner);
void test_s21_tan(SRunner *runner);

#endif  // SRC_S21_TEST_H_
