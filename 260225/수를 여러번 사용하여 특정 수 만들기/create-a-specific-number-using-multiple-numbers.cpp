#include <bits/stdc++.h>

using namespace std;

int A, B, C;

int main() {
    cin >> A >> B >> C;

    int a = C / A;
    int b = C / B;

    int total = 0;

    int maxVal = INT_MIN;

    for(int i = 0; i <= a ; i++)
    {
        total = 0;

        total += A * i;

        for(int j = 0; j <= b; j++)
        {
            total += B;
            if(total > C)
            {
                total -= B;
                break;
            }
        }

        maxVal = max(maxVal, total);
    }

    cout << maxVal;

    return 0;
}