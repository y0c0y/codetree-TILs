#include <bits/stdc++.h>

using namespace std;

int n;
int x[100], y[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int minVal = INT_MAX;
    int tmp;

    for(int i =0;i<n - 1;i++)
    {
        for(int j = i +1; j<n;j++)
        {
            tmp = pow((x[j]-x[i]), 2) + pow((y[j]-y[i]), 2);
            minVal = min(minVal, tmp);
        }
    }

    cout<<minVal;





    // Please write your code here.

    return 0;
}