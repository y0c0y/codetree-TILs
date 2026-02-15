#include <bits/stdc++.h>

using namespace std;

int n, k;
int arr[100];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxVal = INT_MIN;

    int result = 0;

    for(int i = 0; i <= n - k; i++)
    {
        result = 0;
        for(int j = i; j < i + k; j ++)
        {
            result += arr[j];
        }

        maxVal = max(maxVal, result);
    }

    cout << maxVal;

    // Please write your code here.

    return 0;
}