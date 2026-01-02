#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    char str[10] = "";
    for(int i = 0; i <  10; i++)
    {
        cin >> str[i];
    }
    for(int i = 9; i >-1; i--)
    {
        cout << str[i];
    }
    return 0;
}