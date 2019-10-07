#include <iostream>
#include <string>
using namespace std;

int main (){
    int n;
    cin >> n;

    int n_3 = 0;
    int n_5 = 0;
    int x;

    for( ; x < 5000 ; n_3++){
        for( ; x < n; n_5++){
            x = 3*n_3 + 5*n_5;

            if(x == n){
                cout << n_3 + n_5;
                return 0;
            }
        }
        n_5 = 0;
        x = 3*n_3 + 5*n_5;
    }
    cout << -1;
    return 0;
}
