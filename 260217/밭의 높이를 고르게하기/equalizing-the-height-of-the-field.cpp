#include <bits/stdc++.h>

using namespace std;

int N, H, T;
int arr[100];

int main() {
    cin >> N >> H >> T;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int minVal = INT_MAX;

    int total = 0;
    
    for(int i = 0; i < N -T + 1; i++)
    {
        total = 0;

        for(int j = i; j < i + T; j++)
        {
            total += abs(H-arr[j]);
        }

        minVal = min(minVal, total);
    }

    cout << minVal;

    return 0;
}