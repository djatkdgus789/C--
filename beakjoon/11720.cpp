#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int atoi_c(char c){
    int value = 0;
    if(c == '\0'){
        return 0;
    }
    if(c >= '0'&&c <= '9'){
        value = value * 10 +c -'0';
    }
    return value;
}

int main () {
    int n;
    char a[100];
    int sum = 0;
    cin >> n;
    cin >> a;

    for (int i = 0; i < n ; ++i) {
        sum+= atoi_c(a[i]);
        //cout << atoi_c(a[i]) << "\t";

    }
    cout << sum;

}
