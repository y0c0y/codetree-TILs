#include <bits/stdc++.h>

using namespace std;

int X, Y;

int main() {
    cin >> X >> Y;

    int maxVal = INT_MIN;

    string tmp;
    int len = 0;
    int total = 0;

    for(int i = X; i <= Y; i++)
    {
        total = 0;

        tmp = to_string(i);
        len = tmp.length();

        for(int j = 0; j < len; j++)
        {
            total += tmp[j] - '0';
        }

        maxVal = max(total, maxVal);
    }

    cout << maxVal;

    // Please write your code here.

    return 0;
}