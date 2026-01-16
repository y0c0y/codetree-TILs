#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string str;

    cin >> str;

    int len = str.length();

    for(int i=len-1; i >=0; i--)
    {
        if(i%2!=0) cout << str[i];
    }
    return 0;
}