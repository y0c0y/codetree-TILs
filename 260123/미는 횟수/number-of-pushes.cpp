#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.



    string A, B, tmp;
    int result = 0;

    cin >> A >> B;


    int len = A.length();

    bool isChanged = false;

    for(int i = 0; i < len; i++)
    {
        tmp = A.substr(1, len-1) + A.substr(0,1);

        if(tmp == B)
        {
            result = i+1;
            isChanged = true;
            break;
        }

        A = tmp;

        
    }

    if(isChanged) cout << result;
    else cout << -1;




    return 0;
}