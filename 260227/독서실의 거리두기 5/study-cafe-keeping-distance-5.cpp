#include <bits/stdc++.h>

using namespace std;

int N;
string seat;

int main() {
    cin >> N;
    cin >> seat;

    int maxVal = INT_MIN;

    for(int i = 0; i < N; i++)
    {
        

        if(seat[i] == '0')
        {
            int minVal = INT_MAX;

            seat[i]++;

            vector<int> idx;

            for(int j = 0; j < N; j++)
            {
                if(seat[j] == '1')
                {
                    idx.push_back(j);
                }
            }

            int cnt = idx.size();

            for(int j = 1; j < cnt; j++)
            {
                int tmp = idx[j] - idx[j - 1];
                // cout << tmp<< ' ' << minVal << '\n';
                minVal = min(minVal, tmp);
            }

            seat[i]--;

            // cout << maxVal<< ' ' << minVal << '\n';

            maxVal = max(maxVal, minVal);
        }

       
    }

    cout << maxVal;

    return 0;
}