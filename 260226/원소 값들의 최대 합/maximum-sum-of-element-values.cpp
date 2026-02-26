#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[101];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int maxVal = INT_MIN;
    int total = 0;
    int start = 0;
    int end = 0;

    for (int i = 1; i <= n; i++) {
        
        int brr[n+1];

        copy(arr, arr + n + 1, brr);

        start = brr[i];
        total = start;
        
        for (int j = 0; j < m - 1; j++) {

            end = brr[start];
            total += end;

            // cout << start << ' ' << end << ' ' << total << '\n';
            start = end;
        }

        maxVal = max(maxVal, total);
    }

    cout << maxVal;
    
    





    // Please write your code here.

    return 0;
}