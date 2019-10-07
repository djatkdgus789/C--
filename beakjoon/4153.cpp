#include <iostream>
#include <string>
using namespace std;

int main () {
    int x,y,z,tmp;
    while (1){
        cin >> x >> y >> z;
        if(x+y+z == 0){ break;}

        if(x > y){
            tmp = y;
            y = x;
            x = tmp;
        }
        if(x > z){
            tmp = z;
            z = x;
            x = tmp;
        }
        if(y > z){
            tmp = z;
            z = y;
            y = tmp;
        }
        //cout << x << y << z;
        cout << (z*z == x*x + y*y ? "right\n" : "wrong\n");
    }


}