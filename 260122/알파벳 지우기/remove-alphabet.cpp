#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int result = 0;

    int digits = 1;

    for(int c = 0; c< 2; c++)
    {
        string str;
       

        cin >> str;

        int len = str.length();

        for(int i = len-1; i >= 0 ; i--)
        {
            if(str[i] >= '0' && str[i] <= '9') 
            {
                result += (str[i] - '0') * digits;
                digits *= 10;
            }
        }

        digits = 1;
    }

    cout << result;
    return 0;
}