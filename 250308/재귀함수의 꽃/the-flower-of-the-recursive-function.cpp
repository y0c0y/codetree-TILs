#include <iostream>

using namespace std;

int N;


void p(int n)
{
    if(n == 0)return;

    cout << n <<" ";

    p(n-1);

    cout << n << " ";
}

int main() {
    cin >> N;

    // Please write your code here.

    p(N);

    return 0;
}