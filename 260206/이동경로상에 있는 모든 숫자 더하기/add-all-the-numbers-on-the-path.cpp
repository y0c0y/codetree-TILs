#include <iostream>
#include <string>

using namespace std;

int N, T;
string str;
int board[100][100];

int dy[4] = {0,1,0,-1};
int dx[4] = {1,0,-1,0};


bool InRange(int y, int x)
{
    return 0 <= y && y < N && 0<=x && x < N;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> T;
    cin >> str;

    
    int dir = 3;
    int y = N/2;
    int x = N/2;

    int Y = 0;
    int X = 0;

   

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }
    int result = board[y][x];
    
    for(auto ch : str)
    {
        if(ch == 'L')
        {
            dir = (dir - 1 + 4)%4;
        }
        else if(ch == 'R')
        {
            dir = (dir + 1)%4;
        }
        else 
        {
            Y = y + dy[dir];
            X = x + dx[dir];

            if(InRange(Y, X))
            {
                y = Y;
                x = X;
                result += board[y][x];
            }
        }
    }

    cout << result;

    // Please write your code here.

    return 0;
}