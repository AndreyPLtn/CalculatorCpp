#include "Menu.h"
#include "InputHandler.h"

void Menu::printMenu() {
    std::cout << "=============================\n";
    std::cout << "  Engineering Calculator\n";
    std::cout << "=============================\n";
    std::cout << "1.  Add\n"; //+
    std::cout << "2.  Subtract\n"; //-
    std::cout << "3.  Multiply\n"; //*
    std::cout << "4.  Divide\n"; // /
    std::cout << "5.  Power\n"; // степень
    std::cout << "6.  Square Root\n"; // квадратный корень
    std::cout << "7.  Sine\n"; // синус
    std::cout << "8.  Cosine\n"; // косинус
    std::cout << "9.  Tangent\n"; //тангенс
    std::cout << "10. Logarithm\n"; // лог
    std::cout << "11. Exponential\n"; //экспонента
    std::cout << "12. Hyperbolic Sine\n"; //Гиперболический синус
    std::cout << "13. Hyperbolic Cosine\n"; //Гиперболический косинус
    std::cout << "14. Hyperbolic Tangent\n"; //Гиперболический тангенс
    std::cout << "15. Inverse Sine\n"; //Обратный синус
    std::cout << "16. Inverse Cosine\n"; //Обратный косинус
    std::cout << "17. Inverse Tangent\n"; //Обратный тангенс
    std::cout << "18. Inverse Hyperbolic Sine\n"; //Обратный гиперболический синус
    std::cout << "19. Inverse Hyperbolic Cosine\n"; //Обратный гиперболический косинус
    std::cout << "20. Inverse Hyperbolic Tangent\n"; //Обратный гиперболический тангенс
    std::cout << "21. Degrees to Radians\n"; //градусы в радианы
    std::cout << "22. Radians to Degrees\n"; //радианы в градусы
    std::cout << "23. Logarithm with Base\n"; //лог с основанием
    std::cout << "24. Factorial\n"; //факториал
    std::cout << "25. Combinations (nCr)\n";
    std::cout << "26. Permutations (nPr)\n";
    std::cout << "27. Absolute Value\n"; //абсолютное значение
    std::cout << "28. Exponential Base 2\n"; //экспонента с основанием 2
    std::cout << "29. Exponential Base 10\n"; //экспонента с основанием 10
    std::cout << "30. Logarithm Base 2\n"; //лог с основанием 2
    std::cout << "31. Logarithm Base 10\n"; //лог с основанием 10
    std::cout << "0.  Exit\n";
    std::cout << "=============================\n";
}

void Menu::handleChoice(Calculator& calc, int choice) {
    double a, b;
    int n, r;

    try {
        switch (choice) {
        case 1:
            InputHandler::getTwoNumbers(a, b);
            std::cout << "Result: " << calc.add(a, b) << "\n";
            break;
        case 2:
            InputHandler::getTwoNumbers(a, b);
            std::cout << "Result: " << calc.subtract(a, b) << "\n";
            break;
        case 3:
            InputHandler::getTwoNumbers(a, b);
            std::cout << "Result: " << calc.multiply(a, b) << "\n";
            break;
        case 4:
            InputHandler::getTwoNumbers(a, b);
            std::cout << "Result: " << calc.divide(a, b) << "\n";
            break;
        case 5:
            InputHandler::getTwoNumbers(a, b);
            std::cout << "Result: " << calc.power(a, b) << "\n";
            break;
        case 6:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.sqrt(a) << "\n";
            break;
        case 7:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.sin(a) << "\n";
            break;
        case 8:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.cos(a) << "\n";
            break;
        case 9:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.tan(a) << "\n";
            break;
        case 10:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.log(a) << "\n";
            break;
        case 11:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.exp(a) << "\n";
            break;
        case 12:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.sinh(a) << "\n";
            break;
        case 13:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.cosh(a) << "\n";
            break;
        case 14:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.tanh(a) << "\n";
            break;
        case 15:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.asin(a) << "\n";
            break;
        case 16:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.acos(a) << "\n";
            break;
        case 17:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.atan(a) << "\n";
            break;
        case 18:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.asinh(a) << "\n";
            break;
        case 19:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.acosh(a) << "\n";
            break;
        case 20:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.atanh(a) << "\n";
            break;
        case 21:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.degreesToRadians(a) << "\n";
            break;
        case 22:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.radiansToDegrees(a) << "\n";
            break;
        case 23:
            InputHandler::getTwoNumbers(a, b);
            std::cout << "Result: " << calc.logBase(a, b) << "\n";
            break;
        case 24:
            InputHandler::getOneInteger(n);
            std::cout << "Result: " << calc.factorial(n) << "\n";
            break;
        case 25:
            InputHandler::getTwoIntegers(n, r);
            std::cout << "Result: " << calc.nCr(n, r) << "\n";
            break;
        case 26:
            InputHandler::getTwoIntegers(n, r);
            std::cout << "Result: " << calc.nPr(n, r) << "\n";
            break;
        case 27:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.abs(a) << "\n";
            break;
        case 28:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.exp2(a) << "\n";
            break;
        case 29:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.exp10(a) << "\n";
            break;
        case 30:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.log2(a) << "\n";
            break;
        case 31:
            InputHandler::getOneNumber(a);
            std::cout << "Result: " << calc.log10(a) << "\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
        }
    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << "\n";
    }
}