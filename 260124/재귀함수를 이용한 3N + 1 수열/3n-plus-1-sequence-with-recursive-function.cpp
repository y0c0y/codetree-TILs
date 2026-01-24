#include <iostream>

using namespace std;

int n;

int f(int t)
{
    if(t == 1) return 0;

    if(t % 2 == 0) t/=2;
    else t = t * 3 + 1;

    return f(t) + 1;

}

int main() {
    cin >> n;

    // Please write your code here.

    cout << f(n);

    return 0;
}