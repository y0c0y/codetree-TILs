#include <bits/stdc++.h>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;

    int cnt = 1;
    int maxCnt = numeric_limits<int>::min();

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N - 1; i++) {
        if(arr[i] == arr[i+1]) cnt++;
        else
        {
            if(cnt > maxCnt) maxCnt = cnt;
            cnt = 1;
        }
    }

    if(cnt > maxCnt) maxCnt = cnt;

    cout << maxCnt;





    // Please write your code here.

    return 0;
}