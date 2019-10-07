#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int a,b,c;
    int tmp;

    cin >> a >> b >> c;

    if(b>a){
        tmp = b;
        b = a;
        a = tmp;
    }
    if(c>b){
        tmp = c;
        c = b;
        b = tmp;
    }
    if(b>a){
        tmp = b;
        b = a;
        a = tmp;
    }

    cout << b;
}