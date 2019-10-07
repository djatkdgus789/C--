#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main () {
    int t;
    int x1, y1, r1, x2, y2, r2, d;
    cin >> t;
    for (int k = 0; k < t; ++k) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        float d = sqrt(pow(x1-x2,2)+pow(y1-y2,2));

        if(d == 0){
            if(r1 == r2){printf("-1\n");}
            if(r1 != r2){printf("0\n");}
        } else if (abs(r1 - r2) < d && d < abs(r1 + r2)) {printf("2\n"); }
            else if(abs(r1 - r2) == d || d == abs(r1 + r2)){printf("1\n"); }
            else {printf("0\n"); }
        }
        return 0;
    }

//    if(d == 0 && r1 == r2){cout << "-1"<<endl;}
//    if(d == 0 && r1 != r2 ){cout << "0"<<endl;}
//    if (abs(r1 - r2) < d && d < abs(r1 + r2)) { cout << "2" << endl; }
//    if (d != 0 &&(abs(r1 - r2) == d || d == abs(r1 + r2))) { cout << "1" << endl; }
//    if (d != 0 &&(abs(r1 - r2) > d || d > abs(r1 + r2))) { cout << "0" << endl; }
