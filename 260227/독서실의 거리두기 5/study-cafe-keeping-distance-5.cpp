#include <bits/stdc++.h>
using namespace std;

int N;
string seat;

int main() {
    cin >> N;
    cin >> seat;

    int maxVal = INT_MIN;
    int cnt = 0;

    for(int i = 0; i < N; i ++)
    {
        if(seat[i] != '0' ) continue;

        if((i == 0 && seat[i + 1] == '0'))
        {
            seat[i]++;
            cnt = 0;

            // cout << seat << '\n';

            for(int j = i + 1; j < N; j ++)
            {
                if(seat[j] == '1') break;
                else cnt++;
            }
            seat[i]--;
        }
        else if((i == N - 1 && seat[i - 1] == '0'))
        {
            seat[i]++;
            cnt = 0;

            // cout << seat << '\n';

            for(int j = i - 1; j >= 0; j --)
            {
                if(seat[j] == '1') break;
                else cnt++;
                
            }
            seat[i]--;
        }
        else if((seat[i - 1] == '0' && seat[i + 1] == '0'))
        {
            seat[i]++;
            cnt = 0;

            // cout << seat << '\n';

            for(int j = i - 1; j >= 0; j --)
            {
                if(seat[j] == '1')
                {
                    break;
                }
                else cnt++;
                
            }

            int check = cnt;

            for(int j = i + 1; j < N; j ++)
            {
                if(seat[j] == '1')
                {
                    break;
                }
                else check--;
            }

            if(check != 0) cnt = 0;

            seat[i]--;
        }

        maxVal = max(cnt, maxVal);
    }

    cout << maxVal + 1;

    return 0;
}