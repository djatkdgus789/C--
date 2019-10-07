#include <iostream>
#include <string>
using namespace std;

int main () {
    int t;
    int h,w,n;
    int count = 0;
    cin >> t;
    for (int i = 0; i < t;i++){
        cin >> h >> w >> n;
        count = 0;
        //cout << h << w << n;
        for (int j = 1; j <= w; ++j) {
            for (int k = 1; k <= h ; ++k) {
                count++;
                if(count == n){
                    cout << j+100*k << endl;
                    break;
                }
            }
            if(count == n){
                break;
            }
        }
    }
    return 0;

}