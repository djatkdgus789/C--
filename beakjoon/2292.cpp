#include <iostream>
#include <string>
using namespace std;

int main () {
    int n;

    cin >> n;
    n--;
    int i = 1;

    for (; n > 0; i++) {
        n -= i*6;
    }

    cout << i;
}
