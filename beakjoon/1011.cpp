#include <iostream>
#include <string>
using namespace std;

int main () {
    int t;
    int i;
    int a,b;
    cin >> t;
    for (int v = 0; v < t ;v++){
        cin >> a >> b;

        i = 2;
        int x = b - a;
        if (x == 1){
            cout << "1" << endl;
            return 0;
        }
        while ( x > i){
            x = x - (i-1);
            i++;
            //cout << x << "\t"<< i << endl;

        }
        cout << i << endl;
        return 0;
    }

}