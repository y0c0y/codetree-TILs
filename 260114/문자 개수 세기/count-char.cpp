#include <iostream>
#include <string>

using namespace std;

int main() {
    // Please write your code here.


    string s;

    getline(cin, s);


    char ch;
    cin >> ch;

    int cnt = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == ch) cnt ++;
    }

    cout << cnt;


    return 0;
}