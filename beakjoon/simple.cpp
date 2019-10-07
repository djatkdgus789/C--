#include <iostream>
#include <string>
using namespace std;

int main () {
    int m;

    cin >> m;
    cout << m/1000000;
    cout << m/100000%10;
    cout << m/10000%10;
    cout << m/1000%10;
    cout << m/100%10;
    cout << m/10%10;
    cout << m%10;
}