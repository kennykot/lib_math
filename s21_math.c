//  Copyright 2022 <Anton Tuzov>
#include "s21_math.h"

//  вычисляет абсолютное значение целого числа
int s21_abs(int x) {
    return x >= 0 ? x : -x;
}

//  вычисляет арккосинус
long double s21_acos(double x) {
    long double res = S21_NAN;
    if (s21_fabs(x) < 1) {
        res = S21_PI / 2 - s21_asin(x);
    } else if (x == 1) {
        res = 0.0;
    } else if (x == -1) {
        res = S21_PI;
    }
    return res;
}

//  вычисляет арксинус
long double s21_asin(double x) {
    long double res = S21_NAN;
    if (s21_fabs(x) < 1) {
        res = s21_atan(x / s21_sqrt(1 - s21_pow(x, 2)));
    } else if (x == -1.0) {
        res = -S21_PI / 2;
    } else if (x == 1.0) {
        res = S21_PI / 2;
    }
    return res;
}

//  вычисляет арктангенс
long double s21_atan(double x) {
    long double res = 0;
    if (x == 1) {
        res = 0.785398;
    } else if (x == -1) {
        res = -0.785398;
    } else {
        if (s21_fabs(x) <= 1) {
            for (int i = 0; i < 10000; i++) {
                res += (((s21_pow(-1, i)*s21_pow(x, (1 + 2*i))) / (1 + 2*i)));
            }
        } else if (s21_fabs(x) > 1) {
            long double temp = 0;
            for (int i = 0; i < 10000; i++) {
                temp += ((s21_pow(-1, i) * s21_pow(x, (-1 - (2 * i)))) / (1 + (2 * i)));
            }
            res = ((S21_PI*s21_fabs(x)) / (2*x)) - temp;
        }
    }
    return res;
}

//  возвращает ближайшее целое число, не меньшее заданного значения
long double s21_ceil(double x) {
    long double result;
    if (x > 0 && x != s21_cut_off(x)) {
        result = s21_cut_off(x + 1.0);
    } else {
        result = s21_cut_off(x);
    }
    return result;
}

//  вычисляет косинус
long double s21_cos(double x) {
    long double result = 0.0;
    int n = 0;
    long double y = (long double) x;
    long double an = 1;
    long double epsilon = S21_EPSILON / 10.0;  //  Делим на 10, чтобы tan был правильной точности
    while (s21_fabs(an) > epsilon && n < S21_N_MAX) {
        result += an;
        n++;
        an *= -y * y / (2.0 * n - 1.0) / (2.0 * n);
    }
    return result;
}

//  обрезает дробную часть
long double s21_cut_off(double x) {
    long double result;
    if (x < 0) {
        result = -1 * s21_cut_off(-1 * x);
    } else if (x > LLONG_MAX) {
        result = x;  //  При x > LLONG_MAX уже не хранится дробная часть
    } else {
        result = (long long) (x);  //  Для остальных отбрасываем дробную часть
    }
    return result;
}

//  возвращает значение e, возведенное в заданную степень
long double s21_exp(double x) {
    long double res = 1;
    long double temp = 1;
    long double i = 1;
    int flag = 0;
    if (x < 0) {
        x *= -1;
        flag = 1;
    }
    while (s21_fabs(res) > S21_EPSILON) {
        res *= x / i;
        i += 1;
        temp += res;
        if (temp > DBL_MAX) {
            temp = S21_INF;
            break;
        }
    }
    if (flag == 1) {
        if (temp > DBL_MAX) {
            temp = 0;
        } else {
            temp = 1 / temp;
        }
    }
    if (temp > DBL_MAX) {
        temp = S21_INF;
    }
    return temp;
}

// вычисляет абсолютное значение вещественного числа
long double s21_fabs(double x) {
    return x >= 0 ? x : -x;
}

// возвращает ближайшее целое число, не превышающее заданное значение
long double s21_floor(double x) {
    return x > 0 ? (long int)x : (((long int)x == x) ? x : ((long int)x  - 1.0));
}

// остаток операции деления с плавающей точкой
long double s21_fmod(double x, double y) {
    long double res = 0.0;
    if (y == 0 || x == S21_NAN || y == S21_NAN) {
        res = S21_NAN;
    } else if (y == DBL_MIN) {
        res = 0.0;
    } else if (x/y < 0) {
        res = x - s21_ceil(x/y) * y;
    } else {
        res = x - s21_floor(x/y) * y;
    }
    return res;
}

//  вычисляет натуральный логарифм
long double s21_log(double x) {
    long double res = 0.0;
    if (x == S21_NAN || x < 0.0) {
        res = S21_NAN;
    } else if (x == 0.0) {
        res = -S21_INF;
    } else if (x == 1.0) {
        res = 0;
    } else if (x == DBL_MIN) {
        res = -s21_log(1/DBL_MIN);
    } else {
        long double elem = 0.0;
        //  точность вычисляется для диапазона (-1, 1]
        int count = 0;
        while (x >= 2) {
            count++;
            x /= S21_EXP;
        }
        x = x - 1;
        res = elem = x;
        //  ряд Тейлора с точностью 1е-17
        //  начинается с 2-х, т.к. первый элемент
        //  ряда уже записан в res
        for (int i = 2; s21_fabs(elem) > 1e-17; i++) {
            elem *= -((i-1)*(x/i));            //  вычисляется следующий элемент
            res += elem;                       //  складывается в результат
        }
        res += count;     //  к вычисленной точности прибавляется ln(2)
    }
    return res;
}

// возводит число в заданную степень
long double s21_pow(double base, double expr) {
    long double res;
    if (base < 0) {
        base = -base;
        res = s21_exp(expr * s21_log(base));
        if (s21_fmod(expr, 2) != 0) res = -res;
    } else if (base != 0) {
        res = s21_exp(expr * s21_log(base));
    } else if (expr == 0) {
        res = 1;
    } else {
        res = 0;
    }
    return res;
}

//  вычисляет синус
long double s21_sin(double x) {
    long double result = 0.0;
    int n = 0;
    long double y = (long double) x;
    long double an = y;
    long double epsilon = S21_EPSILON / 10;  //  Делим на 10, чтобы tan был правильной точности
    while (s21_fabs(an) > epsilon && n < S21_N_MAX) {
        result += an;
        n++;
        an *= -y * y / (2.0 * n + 1.0) / (2.0 * n);
    }
    return result;
}

//  вычисляет квадратный корень
long double s21_sqrt(double x) {
    long double res = 0.0;
    if (x < 0.0) {
        res = S21_NAN;
    } else if (x == 0) {
        res = 0;
    } else {
        res = s21_exp(0.5 * s21_log(x));
    }
    return res;
}

//  вычисляет тангенс
long double s21_tan(double x) {
    long double result;
    result = s21_sin(x) / s21_cos(x);
    return result;
}
