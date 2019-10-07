#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int testCase;
    cin >> testCase;
    int numSeqString = testCase;
    string testString;


    for( ; testCase != 0 ; testCase-- )
    {
        int al[26] = {0,};
        cin >> testString;
        for(int i = 0 ; i < testString.length(); i++)
        {               
            if(testString[i] != testString[i+1])
            {
                if(al[testString[i]-97] != 0){
                    numSeqString--;
                    break;
                }
                al[testString[i]-97]++;
            }
        }
    }
    cout << numSeqString;
    
}

