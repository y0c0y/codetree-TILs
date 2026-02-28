#include <bits/stdc++.h>

using namespace std;

int N, K;
int arr[1000];

class Info{

public:
    int val;
    int start;
    int cnt;

    Info () {};

    Info(int v, int s, int c)
    {
        this->val = v;
        this-> start = s;
        this->cnt = c;
    }

};

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    vector<Info> info;

    int idx = 0;
    int start = 0;
    int cnt = 0;
    int val = arr[idx];

    bool flag = false;

    for(; idx< N; idx++)
    {
        if(val != arr[idx])
        {

            Info tmp = Info(val, start, idx - start);
            val = arr[idx];
            start = idx;
            info.push_back(tmp);
            flag = false;
        }
        else flag = true;
    }

    if(flag) info.push_back(Info(val, start, N - start));

    int len = info.size();

    int maxVal = INT_MIN;

    for (int i = 0; i < len; i++) {

        
        val = info[i].val;
        cnt = info[i].cnt;

        for(int j = i + 1; j < len; j++)
        {
            if(info[j].val - val <=  K) cnt+= info[j].cnt;
            else break;
        }

        maxVal = max(maxVal, cnt);
        
    }

    cout<< maxVal;

    

    return 0;
}