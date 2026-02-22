#include <bits/stdc++.h>

using namespace std;

int X, Y;

int main() {
    cin >> X >> Y;

    int maxVal = INT_MIN;

    int total = 0;
    int tmp = 0;

    for(int i = X; i <= Y; i++)
    {
        total = 0;
        tmp = i;

        while(tmp > 0)
        {
            total += tmp % 10;
            tmp /= 10;
        }

        maxVal = max(total, maxVal);
    }

    cout << maxVal;

    // Please write your code here.

    return 0;
}