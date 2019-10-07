#include <iostream>
#include <string>
using namespace std;

int main () {
    int a, b, v;

    int i = 1;

    cin >> a >> b >> v;


//   for ( ; v > a ; i++){
//
//       v -= a-b;
//       if(v == a){
//           cout << i+1;
//           return 0;
//       }
//   }
//
//   cout << i+1 ;
//   return 0;

    i = (v - a) / (a - b) + 1;
    if((v - a) % (a - b) == 0){cout << i;}
    else{cout << i+1;}
}