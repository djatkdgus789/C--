#include <iostream>
#include <string>
using namespace std;

int main () {
    int t;
    cin >> t;

    for (int i = 0; i < t ; ++i) {
        float avg = 0;
        int score = 0;
        int n,count = 0;

        cin >> n;
        int arr[n];

        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
            avg += arr[j];
        }
        avg = avg/n;

        for (int j = 0; j < n; ++j) {
            if(arr[j] > avg){
                count++;
            }
        }
        //cout << avg <<"\t"<< n<< endl;
        cout.setf(ios::fixed);
        cout.precision(3);
        cout << (float)count/n *100<< "%\n";

    }
}