#include <iostream>
#include "Menu.h"
#include "Calculator.h"

int main() {
    Menu menu;
    Calculator calc;
    int choice = 0;

    while (true) {
        menu.printMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 0) {
            break;
        }

        menu.handleChoice(calc, choice);
    }

    return 0;
}
