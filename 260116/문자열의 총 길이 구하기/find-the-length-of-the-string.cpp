#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string str;

    int result = 0;

    for(int i = 0; i < 10; i ++)
    {

        cin >> str;
        result += str.length();
    }

    cout << result;
    return 0;
}