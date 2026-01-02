#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b;

    cin >> a >>b;

    cout << a << " " << b << " ";

    for(int i = 0 ; i <8; i++)
    {
        int tmp = b;
        b += a;
        b %= 10;
        cout << b << " ";
        
        a = tmp;
    }
    return 0;
}