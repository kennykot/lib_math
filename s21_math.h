//  Copyright 2022 <Anton Tuzov>
#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

#define S21_PI 3.14159265358979323846264338327950288
#define S21_EPSILON 0.000001
#define S21_N_MAX 10000
#define S21_NAN 0.0 / 0.0
#define S21_INF 1 / 0.0
#define S21_EXP 2.71828182845904523536028747135266249775724709369995

//  вычисляет абсолютное значение целого числа
int s21_abs(int x);

//  вычисляет арккосинус
long double s21_acos(double x);

//  вычисляет арксинус
long double s21_asin(double x);

//  вычисляет арктангенс
long double s21_atan(double x);

//  возвращает ближайшее целое число, не меньшее заданного значения
long double s21_ceil(double x);

//  вычисляет косинус
long double s21_cos(double x);

//  возвращает значение e, возведенное в заданную степень
long double s21_exp(double x);

//  вычисляет абсолютное значение вещественного числа
long double s21_fabs(double x);

//  возвращает ближайшее целое число, не превышающее заданное значение
long double s21_floor(double x);

//  остаток операции деления с плавающей точкой
long double s21_fmod(double x, double y);

//  вычисляет натуральный логарифм
long double s21_log(double x);

//  возводит число в заданную степень
long double s21_pow(double base, double exp);

//  вычисляет синус
long double s21_sin(double x);

//  вычисляет квадратный корень
long double s21_sqrt(double x);

//  вычисляет тангенс
long double s21_tan(double x);

//  внутренние функции
long double s21_cut_off(double x);

// вычисляет факториал
long double s21_fact(int N);

#endif  //  SRC_S21_MATH_H_
