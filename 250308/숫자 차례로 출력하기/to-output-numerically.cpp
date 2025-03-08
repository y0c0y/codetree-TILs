#include <iostream>

using namespace std;

int N;

void p1(int n)
{
    if(n==0)return;

    cout << n << " ";

    p1(n-1);
}

void p2(int n)
{
    if(n==0)return;
    p2(n-1);
    cout << n << " ";

    
}


int main() {
    cin >> N;

    // Please write your code here.

    p2(N);
    cout <<"\n";
    p1(N);
    

    return 0;
}