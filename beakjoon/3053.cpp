#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main () {
    double x;
    cin >> x;

    printf("%0.6lf\n",x*x*M_PI);
    printf("%0.6lf",x*x*2);

    return 0;

}