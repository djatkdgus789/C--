#include <iostream>
#include <string>
using namespace std;

int main () {
    int a[6];
    for (int i = 0; i < 6; ++i) { cin >> a[i]; }

    cout << (a[0] == a[2] ? a[4] : (a[2] == a[4] ? a[0] : a[2])) << " ";
    cout << (a[1] == a[3] ? a[5] : (a[3] == a[5] ? a[1] : a[3]));

}

//
//    for (int i = 0; i < 6 ; ++i) {
//        for (int j = i+1; j < 6; ++j) {
//            if (a[i] == a[j]) {
//                a[i] = -1;
//                a[j] = -1;
//            }
//        }
//    }
//
//    for (int k = 0; k < 6; ++k) {
//        if (a[k] != -1) {
//            cout << a[k] << " ";
//            a[k] = -1;
//            break;
//        }
//    }
//    for (int k = 0; k < 6; ++k) {
//        if(a[k] != -1){
//            cout << a[k];
//            break;
//        }
//    }

