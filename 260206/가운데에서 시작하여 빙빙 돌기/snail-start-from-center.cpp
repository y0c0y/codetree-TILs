#include <iostream>

using namespace std;

int n;

bool InRange(int y, int x)
{
    return 0 <= y && y < n && 0<=x && x < n;
}

int dy[4] = {0,-1,0,1};
int dx[4] = {-1,0,1,0};

int main() {
    cin >> n;
    int grid[n][n] = {};

    int y = n - 1;
    int x = n - 1;
    int dir = 0;

    int Y = 0;
    int X = 0;

    

    for( int cnt = n*n; cnt > 0 ; cnt--)
    {
        grid[y][x] = cnt;

        Y = y + dy[dir];
        X = x + dx[dir];

        if(!InRange(Y,X) || grid[Y][X] != 0)
        {
            dir = (dir+1)%4;
            Y = y + dy[dir];
            X = x + dx[dir];
        }
        y = Y;
        x = X;
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n ;j++)
        {
            cout << grid[i][j] << ' ';
        }
        cout << '\n';
    }

    // Please write your code here.

    return 0;
}
