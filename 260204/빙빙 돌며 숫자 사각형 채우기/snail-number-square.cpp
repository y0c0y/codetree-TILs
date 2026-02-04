#include <bits/stdc++.h>

using namespace std;

const int limit = 100;

int n, m;
int arr[limit][limit];


int dy[4] = {0,-1,0,1};
int dx[4] = {-1,0,1,0};

bool InRange(int y, int x)
{
    return 0 <= y && y < n && 0<= x && x < m;
}

int main() {
    cin >> n >> m;

    int y = 0;
    int x = 0;

    int dir = 2;

    int DY = 0;
    int DX = 0;

    int cnt = 1;

    while(cnt <= n * m)
    {
        if(InRange(y, x) && arr[y][x] == 0)
        {
            arr[y][x] = cnt;
            cnt++;
        }

        DY = y + dy[dir];
        DX = x + dx[dir];

        if(!InRange(DY, DX) || arr[DY][DX])
        {
            dir = (dir+1) % 4;
        }
        else
        {
            y = DY;
            x = DX;
        }
    }
    

    for(int i = 0; i < n; i ++)
    {
        for(int j = 0;j<m;j++)
        {
            cout<< arr[i][j] << ' ';
        }
        cout <<'\n';
    }

    // Please write your code here.

    return 0;
}