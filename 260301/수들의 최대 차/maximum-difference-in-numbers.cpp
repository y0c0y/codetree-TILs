#include <bits/stdc++.h>

using namespace std;

int N, K;
int arr[1000];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    vector<pair<int,int>> info;

    int idx = 0;
    int val = arr[idx];
    info.push_back(make_pair(val,idx));

    for(; idx< N; idx++)
    {
        if(val != arr[idx])
        {
            val = arr[idx];
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
            if(arr[j] - val <=  K) cnt++;
            else break;
        }

        maxVal = max(maxVal, cnt);
        
    }

    cout<< maxVal;

    

    return 0;
}