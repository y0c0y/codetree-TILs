#include <iostream>
using namespace std;

int main() {
    // Please write your code here.


    char ch;

    cin >> ch;

    int tmp = (ch - 'a' + 1) % 26;

    cout << (char)('a'+tmp);
    return 0;
}