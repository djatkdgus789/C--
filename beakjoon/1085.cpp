#include <iostream>
#include <string>
using namespace std;

int main () {
    int x,y,w,h;
    int min;
    int tmp1;
    int tmp2;

    cin >> x >> y >> w >> h;

    if(x > w-x)
        tmp1 = w-x;
    else
        tmp1 = x;

    if (y > h-y)
        tmp2 = h-y;
    else
        tmp2 = y;

    if(tmp1 > tmp2)
        min = tmp2;
    else
        min = tmp1;

    cout << min;
}