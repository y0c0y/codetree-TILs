#include <bits/stdc++.h>

using namespace std;

int n, m;

int dy[4] = {0,1,0,-1};
int dx[4] = {1,0,-1,0};

bool InRange(int y, int x)
{
    return 0<= y && y < n && 0<=x && x < m;
}

int main() {
    cin >> n >> m;
    
    char arr[n][m] = {};
    
    int y = 0;
    int x = 0;
    int dir = 0;
    int Y = 0;
    int X = 0;

    for(int cnt = 0; cnt < n * m ; cnt++)
    {       
        arr[y][x] = cnt % 26 + 'A';
        
        Y = y + dy[dir];
        X = x + dx[dir];
        if(!InRange(Y, X) || arr[Y][X] != 0)
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
        for(int j = 0; j < m; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }



    return 0;
}