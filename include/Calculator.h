#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
    double power(double a, double b);
    double sqrt(double a);
    double sin(double a);
    double cos(double a);
    double tan(double a);
    double log(double a);
    double exp(double a);
    double sinh(double a);
    double cosh(double a);
    double tanh(double a);
    double asin(double a);
    double acos(double a);
    double atan(double a);
    double asinh(double a);
    double acosh(double a);
    double atanh(double a);
    double degreesToRadians(double a);
    double radiansToDegrees(double a);
    double logBase(double a, double b);
    int factorial(int n);
    int nCr(int n, int r);
    int nPr(int n, int r);
    double abs(double a);
    double exp2(double a);
    double exp10(double a);
    double log2(double a);
    double log10(double a);
};

#endif // CALCULATOR_H