#include <iostream>
#include <string>
using namespace std;

int isNotSelfNumber(int a)
{   
    if(a < 10000){
        if(a<10){
            return (a+a);
        }else if(a < 100){
            return (a+a/10+a%10);
        }else if(a < 1000){
            return (a+a/100+(a/10%10)+a%10);
        }else if(a < 10000){
            if ((a+a/1000+(a/100%10)+(a/10%10)+a%10) >= 10000){
                return 10000;
            }
            return (a+a/1000+(a/100%10)+(a/10%10)+a%10);
        }
    }
    return 10000;
}

int main()
{   
    bool SelfNumber[10001] = {true,};

    for(int i = 0 ; i < 10000 ; i++)
    {
        SelfNumber[isNotSelfNumber(i)] = true;
    }
    for(int i = 1 ; i < 10000 ; i++)
    {
        if(SelfNumber[i] == false){
            cout << i << endl;
        }
    }
}

