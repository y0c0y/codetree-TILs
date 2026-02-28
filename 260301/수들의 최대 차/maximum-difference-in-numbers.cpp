#include <bits/stdc++.h>

using namespace std;

int N, K;
int arr[1000];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    vector<int> brr(arr, arr + N);

    sort(brr.begin(), brr.end());

    vector<pair<int,int>> info;

    int idx = 0;
    int val = brr[idx];
    info.push_back(make_pair(val,idx));

    for(; idx< N; idx++)
    {
        if(val != brr[idx])
        {
            val = brr[idx];
            info.push_back(make_pair(val,idx));
        }
    }

    int len = info.size();

    int maxVal = INT_MIN;
    int cnt = 0;

    for (int i = 0; i < len; i++) {

        cnt = 0;
        tie(val,idx) = info[i];

        for(int j = idx; j < N; j++)
        {
            if(brr[j] - val <=  K) cnt++;
            else break;
        }

        maxVal = max(maxVal, cnt);
        
    }

    cout<< maxVal;

    

    return 0;
}