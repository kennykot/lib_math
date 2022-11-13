# lib_math

## Introduction

- Implementation of the math.h library with additions on language C.

- This library implements basic mathematical operations, which are then used in various algorithms.

- C mathematical operations are a group of functions in the standard library of the C programming language implementing basic mathematical functions. All functions use floating-point numbers in one manner or another. Different C standards provide different, albeit backwards-compatible, sets of functions. Any functions that operate on angles use radians as the unit of angle.

## Description of the implemented functions of the math.h library

| No. | Function | Description |
| --- | -------- | ----------- |
| 1 | `int abs(int x)` | computes absolute value of an integer value |
| 2 | `long double acos(double x)` | computes arc cosine |
| 3 | `long double asin(double x)` | computes arc sine |
| 4 | `long double atan(double x)` | computes arc tangent |
| 5 | `long double ceil(double x)` | returns the nearest integer not less than the given value |
| 6 | `long double cos(double x)` | computes cosine |
| 7 | `long double exp(double x)` | returns e raised to the given power |
| 8 | `long double fabs(double x)` | computes absolute value of a floating-point value |
| 9 | `long double floor(double x)` | returns the nearest integer not greater than the given value |
| 10 | `long double fmod(double x, double y)` | remainder of the floating-point division operation |
| 11 | `long double log(double x)` | computes natural logarithm |
| 12 | `long double pow(double base, double exp)` | raises a number to the given power |
| 13 | `long double sin(double x)` | computes sine |
| 14 | `long double sqrt(double x)` | computes square root |
| 15 | `long double tan(double x)` | computes tangent | 

## Information about implemented library

- The library developed in C language of C11 standard using gcc compiler
- Functions developed as a static library (with the s21_math.h header file)
- The library developed according to the principles of structured programming
- There are prefix "s21" before each function"
- Library functions have full coverage with unit-tests with the check.h library  
- Unit-tests check the results of my implementation by comparing them with the implementation of the standard math.h library
- Unit tests cover at least 90% of each function (checked using gcovr)
- I use Makefile for building the library and tests (the targets: _all, clean, test, s21_math.a, gcov_report_) 
- The total verifiable accuracy is 16 significant digits
- Verifiable accuracy of the fractional part is up to 6 decimal places.

All code is the property of Anton Tuzov.
