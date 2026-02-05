#include <bits/stdc++.h>

using namespace std;

const int limit = 10000;

int N, M;
int r[limit], c[limit];

int dy[4] = {0,-1,0,1};
int dx[4] = {1,0,-1,0};

int arr[limit][limit];

bool InRange(int y, int x)
{
    return 0 <= y && y < N && 0 <= x && x < N;
}

int Check(int y, int x)
{
    int Y = 0;
    int X = 0;

    int cnt = 0;

    // for(int i = 0; i < N; i++)
    // {
    //     for(int j = 0; j < N ; j++)
    //     {
    //         cout << arr[i][j];
    //     }
    //     cout << '\n';

    // }

    for (int i = 0; i < 4; i++)
    {
        Y = y + dy[i];
        X = x + dx[i];

        if (!InRange(Y, X)) continue;
        if (arr[Y][X]) cnt++;
    }

    // cout << "Total : " << cnt << '\n';

    if (cnt == 3) return 1;
    else return 0;
}

int main() {
    cin >> N >> M;

    int y = 0;
    int x = 0;

    for (int i = 0; i < M; i++) {
        cin >> r[i] >> c[i];

        y = r[i] - 1;
        x = c[i] - 1;

        arr[y][x]++;

        cout<< Check(y, x) << '\n';
    }

    return 0;
}