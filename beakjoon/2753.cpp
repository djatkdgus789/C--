#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int x;
    cin >> x;

    if( (x % 4 == 0 && x % 100 != 0) || x%400 == 0) {
        cout << "1";
    }else{
        cout << "0";
    }
}