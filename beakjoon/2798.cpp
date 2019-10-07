#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main () {
    int n,m,ans = 0;
    int card[101];
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {cin >> card[i];}


    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (i != j || i != k || j != k){
                    int t = card[i] + card[j] + card[k];
                    if( t <= m &&  ans < t ){ ans = t;}
                }
            }
        }
    }
    printf("%d",ans);


    return 0;
}

