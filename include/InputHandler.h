#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <iostream>

class InputHandler {
public:
    static void getTwoNumbers(double& a, double& b);
    static void getOneNumber(double& a);
    static void getTwoIntegers(int& n, int& r);
    static void getOneInteger(int& n);
};

#endif // INPUTHANDLER_H