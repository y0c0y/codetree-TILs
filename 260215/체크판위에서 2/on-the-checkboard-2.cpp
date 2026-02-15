#include <bits/stdc++.h>

using namespace std;

int R, C;
char grid[15][15];
int result;

list<pair<int, int>> FindDestinations(int y, int x)
{
    list<pair<int, int>> reVal;
    pair<int,int> des;

    for(int k = y + 1; k < R; k++)
    {
        for(int l = x + 1; l < C; l++)
        {
            if(grid[y][x] != grid[k][l])
            {
                des = make_pair(k, l);
                reVal.push_back(des);

                // cout << y << ' ' << x << " to " << k << ' ' << l << '\n';
            }
        }      
    }

    return reVal;
}

void FindRoute(int y, int x, int jumpCnt)
{

    list<pair<int, int>> des;

    if(jumpCnt <= 3) 
    {
        if(y == R - 1 && x == C - 1 && jumpCnt == 3)
        {
            result++;
            return;
        }
        else
        {
            des = FindDestinations(y, x);

            for(auto d : des)
            {
                FindRoute(d.first, d.second, jumpCnt + 1);
            }
        }
    }
    else return;
}


int main() {
    cin >> R >> C;

    result = 0;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> grid[i][j];
        }
    }

    FindRoute(0,0, 0);

    cout << result;


    // Please write your code here.

    return 0;
}