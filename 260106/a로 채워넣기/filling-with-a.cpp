#include <iostream>
using namespace std;

int main() {
    // Please write your code here.


    string s;
    cin >> s;

    int l = s.length() - 1;

    s[1] = s[l-1] = 'a';

    cout << s;
    
    return 0;
}