#ifndef __CALC__
#define __CALC__

#include <iostream>
using namespace std;

struct Calculator{
private:

    int addCount,
        subCount,
        mulCount,
        divCount;
public:
    int Add(int a,int b);
    int Sub(int a,int b);
    int Mul(int a,int b);
    int Div(int a,int b);
    void ShowOpCount();

};

#endif