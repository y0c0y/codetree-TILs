#include <bits/stdc++.h>
using namespace std;

const int limits = 1000001;

int Direction(char dirCh)
{
    if(dirCh == 'L') return -1;
    else return 1;
}

int main() {

    int arr[limits];
    int brr[limits];

    fill_n(arr, limits, limits + 1);
    fill_n(brr, limits, limits + 1);

    int n,m;
    char dirCh;
    int t, d;

    cin >> n >> m;

    int moveTime = 0;
    int allTime = 0;
    int allSpace = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> dirCh >> t;

        d = Direction(dirCh);

        moveTime = allTime + t;

        for(; allTime < moveTime; allTime++)
        {  
            arr[allTime] = allSpace;
            allSpace += d;
            // cout << arr[allTime] << ' ';
        }
    }

    // cout << '\n';

    allSpace = 0;
    allTime = 0;

    for(int i = 0; i < m; i++)
    {
        cin >> dirCh >> t;

        d = Direction(dirCh);

        moveTime = allTime + t;

        for(; allTime < moveTime; allTime++)
        {
            brr[allTime] = allSpace;
            allSpace += d;
            // cout << brr[allTime] << ' ';
        }
    }
    // cout << '\n';

    int result = -1;

    for(int i = 1; i < limits; i++)
    {
        if(arr[i] == limits+1 || brr[i]== limits+1) 
        {
            // cout << i << ' '<< arr[i]<<' ' << brr[i] << '\n';
            break;
        }
        if(arr[i] == brr[i])
        {
            result = i;
            break;
        }
    }
    cout << result;

    return 0;
} 