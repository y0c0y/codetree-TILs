#include <bits/stdc++.h>

using namespace std;

const int N = 5;


int arr[N];

int main() {
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    long long minGap = LLONG_MAX;

    long long total = accumulate(arr, arr + N + 1, 0);

    long long score[3];

    long long minVal, maxVal;

    for(int i = 0; i < N; i ++)
    {
        score[0] = arr[i];

        for(int j = 0; j < N; j++)
        {
            if(j == i) continue;

            for(int k = 0; k < N; k++)
            {
                if(k == i || k == j) continue;

                score[1] = arr[j] + arr[k];

                score[2] = total - (score[0] + score[1]);


                if(score[0] == score[1]) continue;
                if(score[0] == score[2]) continue;
                if(score[1] == score[2]) continue;


                minVal = min({score[0], score[1], score[2]});
                maxVal = max({score[0], score[1], score[2]});

                minGap = min(minGap, maxVal - minVal);

                // cout << score[0] << ' ' << score[1] << ' ' << score[2] << ' ' << minGap << '\n';
            }
        }
    }

    if(minGap == LLONG_MAX) cout << -1;
    else cout << minGap;

    // Please write your code here.

    return 0;
}