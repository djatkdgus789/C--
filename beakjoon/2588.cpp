#include <iostream>
#include <string>
using namespace std;

int main ()
{   
    int A,B;
    int A_100, A_10, A_1
        ,B_100,B_10,B_1;

    cin >> A;
    cin >> B;

    B_100 = B/100;
    B_10 = (B/10)%10;
    B_1 = B%10;

    cout << A * B_1 << endl;
    cout << B_10 * A << endl;
    cout << B_100 * A << endl;
    cout << A * B << endl;


    return 0;   
}

