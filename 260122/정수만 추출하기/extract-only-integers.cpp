#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    
    string str;
    

    int result = 0;

    int len = 0;

    bool allInt = true;

    for(int c = 0; c < 2; c++)
    {
        cin >> str;

        len = str.length();

        for(int i = 0; i < len; i++)
        {
            if(str[i] < '0' || str[i] > '9') 
            {
                string tmp = str.substr(0, i);
                result += stoi(tmp);

                allInt = false;
                break;
            }
        }

        if(allInt) 
        {
            result += stoi(str);
        }

        allInt = true;

    }

    cout << result;

    
    return 0;
}