#include <iostream>

using namespace std;

int a, b, c;

long long f(long long t)
{
    if(t <= 0) return 0;

    long long tmp = t%10 ;

    t/=10;

    return f(t) + tmp;

}

int main() {
    cin >> a >> b >> c;

    // Please write your code here.

    long long tmp = a*b*c;


    cout << f(tmp);

    

    return 0;
}