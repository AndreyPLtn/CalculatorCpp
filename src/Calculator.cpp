//определения методов класса Calculator
#include "Calculator.h"
#include <cmath>
#include <stdexcept>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double Calculator::add(double a, double b) { return a + b; }
double Calculator::subtract(double a, double b) { return a - b; }
double Calculator::multiply(double a, double b) { return a * b; }
double Calculator::divide(double a, double b) {
    if (b == 0) throw std::invalid_argument("Division by zero");
    return a / b;
}
double Calculator::power(double base, double exponent) { return std::pow(base, exponent); }
double Calculator::sqrt(double a) {
    if (a < 0) throw std::invalid_argument("Square root of negative number");
    return std::sqrt(a);
}
double Calculator::sin(double a) { return std::sin(a); }
double Calculator::cos(double a) { return std::cos(a); }
double Calculator::tan(double a) { return std::tan(a); }
double Calculator::log(double a) {
    if (a <= 0) throw std::invalid_argument("Logarithm of non-positive number");
    return std::log(a);
}
double Calculator::exp(double a) { return std::exp(a); }
double Calculator::sinh(double a) { return std::sinh(a); }
double Calculator::cosh(double a) { return std::cosh(a); }
double Calculator::tanh(double a) { return std::tanh(a); }
double Calculator::asin(double a) { return std::asin(a); }
double Calculator::acos(double a) { return std::acos(a); }
double Calculator::atan(double a) { return std::atan(a); }
double Calculator::asinh(double a) { return std::asinh(a); }
double Calculator::acosh(double a) { return std::acosh(a); }
double Calculator::atanh(double a) { return std::atanh(a); }
double Calculator::degreesToRadians(double degrees) { return degrees * (M_PI / 180.0); }
double Calculator::radiansToDegrees(double radians) { return radians * (180.0 / M_PI); }
double Calculator::logBase(double a, double base) {
    if (a <= 0 || base <= 0) throw std::invalid_argument("Logarithm of non-positive number or base");
    return std::log(a) / std::log(base);
}
int Calculator::factorial(int n) {
    if (n < 0) throw std::invalid_argument("Factorial of negative number");
    return (n == 0) ? 1 : n * factorial(n - 1);
}
int Calculator::nCr(int n, int r) {
    if (r > n) throw std::invalid_argument("r cannot be greater than n");
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int Calculator::nPr(int n, int r) {
    if (r > n) throw std::invalid_argument("r cannot be greater than n");
    return factorial(n) / factorial(n - r);
}
double Calculator::abs(double a) { return std::abs(a); }
double Calculator::exp2(double a) { return std::exp2(a); }
double Calculator::exp10(double a) { return std::pow(10, a); }
double Calculator::log2(double a) {
    if (a <= 0) throw std::invalid_argument("Logarithm of non-positive number");
    return std::log2(a);
}
double Calculator::log10(double a) {
    if (a <= 0) throw std::invalid_argument("Logarithm of non-positive number");
    return std::log10(a);
}