#include <iostream>

using namespace std;

int n;


void p(int n)
{
    if(n == 0) return;

    p(n-1);

    for(auto i =0;i<n; i++)
    {
        cout << "*";
    }
    cout << "\n";
}

int main() {
    cin >> n;

    // Please write your code here.

    p(n);

    return 0;
}