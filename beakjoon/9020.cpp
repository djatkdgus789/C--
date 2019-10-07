//
// Created by 엄상현 on 2019-09-06.
//
#include <iostream>
#include <string>
using namespace std;

bool is_prime(int n){
    if(n == 1){
        return false;
    }
    if(n%2 == 0 && n != 2) {
        return false;
    }
    for (int i = 2; i*i <= n; ++i) {
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    int num;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> num;
        if (num % 2 == 0) {
            for (int a = num / 2, b = num / 2; a > 0 && b < num; a--, b++)
                if ((is_prime(a)) && (is_prime(b))) {
                    cout << a << " " << b << endl;
                    break;
                }
        } else {
            for (int a = num / 2, b = num / 2 + 1; a > 0 && b < num; a--, b++)
                if ((is_prime(a)) && (is_prime(b))) {
                    cout << a << " " << b << endl;
                }
        }
    }
}
