#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
    cin >> n;

    vector<int> digits;

    int tmp = 0;

    while(n > 1)
    {

        tmp = n % 2;

        digits.push_back(tmp);

        n /=2;

    }

    digits.push_back(n);

    reverse(digits.begin(), digits.end());

    for(auto i : digits)
    {
        cout<<i;
    }

    // Please write your code here.

    return 0;
}