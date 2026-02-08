#include <iostream>
#include<cmath>
using namespace std;

int main() {
    // Please write your code here.

    int a,b;
    cin >> a >> b;

    int tmp = a+b;

    cout << tmp << ' ';
    cout << floor((tmp)*10.0)/20;
    return 0;
}