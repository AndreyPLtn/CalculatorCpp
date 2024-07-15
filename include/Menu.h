#ifndef MENU_H
#define MENU_H

#include "Calculator.h"

class Menu {
public:
    void printMenu();
    void handleChoice(Calculator& calc, int choice);
};

#endif // MENU_H