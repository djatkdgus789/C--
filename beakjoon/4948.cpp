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
    for (int i = 2; i*i <= n; ++i) {
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n = 1;
    int prime_num = 0;
    while(n != 0){
        cin >> n;
        for (int i = n+1; i <= 2*n ; ++i) {
            if(is_prime(i)){
                prime_num++;
            }
        }
        if(prime_num == 0){ return 0; }
        cout << prime_num << endl;
        prime_num = 0;
    }
        
    
}

