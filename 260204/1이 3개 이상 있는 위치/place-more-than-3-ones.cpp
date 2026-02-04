#include <iostream>

using namespace std;

int n;
int grid[100][100];


int dy[4] = {0,1,0,-1};
int dx[4] = {1,0,-1,0};


bool InRange(int y, int x)
{
    return 0 <= y && y < n && 0 <= x && x < n;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int y = 0;
    int x = 0;
    int result = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            for(int  k = 0; k < 4; k++)
            {
                y = i + dy[k];
                x = j + dx[k];

                if(!InRange(y, x)) continue;
                if(grid[y][x]) cnt++;
            }

            if(cnt >= 3) result++;

            cnt = 0;
        }
    }

    cout << result;

    // Please write your code here.

    return 0;
}