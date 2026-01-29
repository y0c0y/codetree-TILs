#include <bits/stdc++.h>

using namespace std;

const int OFFSET = 1000;
const int LIMIT = 2*OFFSET + 1;

int arr[LIMIT][LIMIT] = {{},};

int xF[3], yF[3];
int xS[3], yS[3];

int main() {
    cin >> xF[0] >> yF[0] >> xS[0] >> yS[0];
    cin >> xF[1] >> yF[1] >> xS[1] >> yS[1];
    cin >> xF[2] >> yF[2] >> xS[2] >> yS[2];

    for(int i = 0; i < 2; i++)
    {
        for(int y = yF[i]; y < yS[i];y++)
        {
            for(int x = xF[i]; x < xS[i]; x++)
            {
                arr[y+OFFSET][x+OFFSET]++;
            }
        }
    }

    for(int y = yF[2]; y < yS[2];y++)
    {
        for(int x = xF[2]; x < xS[2]; x++)
        {
            arr[y+OFFSET][x+OFFSET] = -1;
        }
    }

    // int minY = numeric_limits<int>::max();
    // int maxY = numeric_limits<int>::min();
    // int minX = numeric_limits<int>::max();
    // int maxX = numeric_limits<int>::min();

    int cnt = 0;

    for(int y = 0; y < LIMIT; y++)
    {
        for(int x = 0; x < LIMIT; x++)
        {
            if(arr[y][x] > 0)
            {
                cnt++;
            }
        }
    }

    

    cout << cnt;

    // Please write your code here.

    return 0;
}