#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    if (!(cin >> N >> K)) return 0;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    int maxVal = 0;
    int right = 0;

    // 투 포인터 활용: O(N)
    for (int left = 0; left < N; left++) {
        // 현재 범위 [left, right]의 차이가 K 이하인 동안 right를 확장
        while (right < N && arr[right] - arr[left] <= K) {
            right++;
        }
        // 개수는 right - left
        maxVal = max(maxVal, right - left);
    }

    cout << maxVal;
    return 0;
}