#include <iostream>
#include <string>

using namespace std;

string A;

bool IsInOtherAlphabet()
{
    int len = A.length();

    for(int i = 1; i < len; i++)
    {
        if(A[0] != A[i]) return true;
    }
    
    return false;
}

int main() {
    cin >> A;

    // Please write your code here.

    if(IsInOtherAlphabet()) cout << "Yes";
    else cout << "No";

    return 0;
}