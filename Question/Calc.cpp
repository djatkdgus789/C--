#include <iostream>
#include "Calc.h"

using namespace std;

int Calculator::Add(int a, int b) {
    addCount++;
    return a+b;
}

int Calculator::Sub(int a, int b) {
    subCount++;
    return a-b;
}
int Calculator::Mul(int a, int b) {
    mulCount++;
    return a*b;
}
int Calculator::Div(int a, int b) {
    divCount++;
    return a/b;
}
void Calculator::ShowOpCount() {
    cout << "ADD : " << addCount << "SUB : " << subCount
        << "MUL : " << mulCount << "DIV : " << divCount << endl;
}