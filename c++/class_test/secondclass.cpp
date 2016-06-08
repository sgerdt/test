#include "secondclass.h"
#include <iostream>

SecondClass::SecondClass() {

};

SecondClass::~SecondClass() {

};

int SecondClass::Freedom() {
    setFreedom(5);
    return 0;
}

int SecondClass::gainFinancialFreedom() {
    setFinancialFreedom(8);
    return 0;
}

int SecondClass::createMeaningfulWork() {
    setMeaningfulWork(8);
    return 0;
}

int main () {

    cout << "Creation started." << endl;

    //MainClass* mc = new MainClass();
    SecondClass* sc = new SecondClass();

    cout << "Creation done, return 0." << endl;
    if (sc != NULL)
        delete(sc);
    return 0;
}
