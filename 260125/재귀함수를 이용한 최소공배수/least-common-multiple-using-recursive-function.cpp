#include <bits/stdc++.h>

using namespace std;

int n;
int arr[10];

int FindLCM(int i, int cnt, int max)
{
    if(cnt == n) return max;

    // cout << i << ' ' << cnt << ' ' << max << '\n';

    if(max % arr[i] == 0)
    {
        return FindLCM(i+1, cnt + 1, max);
    }
    else
    {
        return FindLCM(0, 0, max + 1);
    }
}

int main() {

    vector<int> brr;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // int max = 1;

    // bool exits = false;

    // int cnt = 0;

    // while(cnt != n)
    // {
    //     for (int i = 0; i < n; i++) 
    //     {
    //         if(max % arr[i] != 0) 
    //         {
    //             exits = true;
    //             break;
    //         }
    //         else
    //         {
    //             cnt++;
    //         }
    //     }

    //     if(exits)
    //     {
    //         cnt = 0;
    //         exits = false;
    //         max++;
    //     }
    // }

    cout << FindLCM(0,0,1);

    return 0;
}