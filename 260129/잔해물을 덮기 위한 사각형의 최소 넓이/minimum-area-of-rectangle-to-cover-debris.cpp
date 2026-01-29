#include <bits/stdc++.h>

using namespace std;

const int OFFSET = 1000;
const int LIMIT = 2*OFFSET + 1;

int arr[LIMIT][LIMIT] = {{},};

int xF[2], yF[2];
int xS[2], yS[2];

int main() {
    cin >> xF[0] >> yF[0] >> xS[0] >> yS[0];
    cin >> xF[1] >> yF[1] >> xS[1] >> yS[1];

    for(int y = yF[0]; y < yS[0]; y++)
    {
        for(int x = xF[0]; x < xS[0]; x++)
        {
            arr[y+OFFSET][x+OFFSET]++;
        }
    }

    for(int y = yF[1]; y < yS[1];y++)
    {
        for(int x = xF[1]; x < xS[1]; x++)
        {
            arr[y+OFFSET][x+OFFSET]--;
        }
    }

    int minY = numeric_limits<int>::max();
    int maxY = numeric_limits<int>::min();
    int minX = numeric_limits<int>::max();
    int maxX = numeric_limits<int>::min();

    for(int y = 0; y < LIMIT; y++)
    {
        for(int x = 0; x < LIMIT; x++)
        {
            if(arr[y][x] > 0)
            {
                if(y > maxY) maxY = y;
                if(y < minY) minY = y;
                if(x > maxX) maxX = x;
                if(x < minX) minX = x;
            }
        }
    }

    int cnt = 0;
    // cout<<maxY<<' '<< maxX<<' '<<minY<<' '<<minX<<'\n';

    for(int y = minY; y <= maxY; y++)
    {
        for(int x = minX; x <= maxX; x++)
        {
            cnt++;
        }
    }

    cout << cnt;

    // Please write your code here.

    return 0;
}