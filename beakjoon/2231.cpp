#include <iostream>

using namespace std;

int main (){
    int n,m,result = 0;
    cin >> n;

    for (int i = 0; i <= 100; ++i) {
        m = n - i;
        if(n == m + m/1000000
                + m/100000%10
                + m/10000%10
                + m/1000%10
                + m/100%10
                + m/10%10
                + m%10){
            result = m;
        }
    }
    if(result == 0){
        cout << 0;
    } else{cout << result;}
}