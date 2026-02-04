#include <iostream>

using namespace std;

int n, t;
int r, c;
char d;


int dx[4] = { 1,0,-1,0}, dy [4] = {0,1,0,-1};

int ReverseDirection(int dir)
{
    return (dir+2) % 4;
}

bool InRange(int y, int x)
{
    return 1 <= y && y <= n && 1 <= x && x <= n;
}

int CharToIntDirection(char ch)
{
    if(ch == 'U') return 3;
    else if(ch == 'D') return 1;
    else if(ch == 'R') return 0;
    else return 2; //L
}

int main() {
    cin >> n >> t;
    cin >> r >> c >> d;

    int dir = CharToIntDirection(d);

    int y =0;
    int x = 0;
    
    while(t > 0)
    {
        y = c + dx[dir];
        x = r + dy[dir];

        if(!InRange(y, x))
        {
            dir = ReverseDirection(dir);
        }
        else
        {
            c = y;
            r = x;
        }
        t--;
    }

    cout<< r << ' ' << c;

    // Please write your code here.

    return 0;
}