#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string str;

    getline(cin, str);

    int len = str.length();
    str[1]  = str[len-2] = 'a';

    cout << str;
    return 0;
}