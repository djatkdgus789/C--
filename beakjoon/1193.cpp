#include <iostream>
#include <string>
using namespace std;

int main () {
    int n;
    cin >> n;
    int i=1;

    for (; n > i; i++) {
        n -= i;
        // cout << i << '\t'<< n << endl;
    }

    //cout << i;

    if(i%2 == 1){
        cout << i+1-n << "/"<<n;
    }
    else{
        cout << n << "/"<< i+1-n;
    }


    return 0;
}