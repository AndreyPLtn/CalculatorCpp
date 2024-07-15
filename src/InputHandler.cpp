#include "InputHandler.h"

void InputHandler::getTwoNumbers(double& a, double& b) {
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
}

void InputHandler::getOneNumber(double& a) {
    std::cout << "Enter a number: ";
    std::cin >> a;
}

void InputHandler::getTwoIntegers(int& n, int& r) {
    std::cout << "Enter n and r: ";
    std::cin >> n >> r;
}

void InputHandler::getOneInteger(int& n) {
    std::cout << "Enter an integer: ";
    std::cin >> n;
}