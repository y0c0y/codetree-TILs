#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;

    // Please write your code here.


    int t = (c - a) * 60;
    int m = d - b;

    cout << t + m;

    return 0;
}