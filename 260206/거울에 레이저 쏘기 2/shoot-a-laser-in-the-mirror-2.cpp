#include <bits/stdc++.h>

using namespace std;

int n;
char grid[1000][1000];
int k;

int dy[4] = { 1,0,-1, 0 };
int dx[4] = { 0,-1,0,1 }; //SWNE

int Reflect(char ch, int d)
{

    bool isHorizontal = (d % 2 == 0);
    bool isSlash = (ch == '/');

    bool flag = false;

    if (isHorizontal && !isSlash || !isHorizontal && isSlash)
    {
        flag = true;
    }

    if (isHorizontal && !isSlash)
    {
        d = (d + 1) % 4;
    }
    else // 'Back Slash'
    {
        d = (d - 1 + 4) % 4;
    }

    return d;
}

tuple<int, int, int> FindStartInfo()
{
    int dir = 0;
    int y = 0;
    int x = 0;

    if (k <= n) { 
        dir = 0; y = 0; x = k - 1; 
    } else if (k <= 2 * n) { 
        dir = 1; y = k - n - 1; x = n - 1; 
    } else if (k <= 3 * n) { 
        dir = 2; y = n - 1; x = 3 * n - k; 
    } else { 
        dir = 3; y = 4 * n - k; x = 0; 
    }

    return make_tuple(dir, y, x);
}

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

    cin >> k;

    int dir = 0;
    int x = 0;
    int y = 0;
    int cnt = 0;

    tie(dir, y, x) = FindStartInfo();

    while (InRange(y, x))
    {
        //cout << dir << ' ' << y << ' ' << x << '\n';
        dir = Reflect(grid[y][x], dir);
        cnt++;
        y += dy[dir];
        x += dx[dir];
    }

    cout << cnt;

    return 0;
}