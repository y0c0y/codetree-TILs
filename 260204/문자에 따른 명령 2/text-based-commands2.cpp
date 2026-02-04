#include <iostream>

using namespace std;

string dirs;

int dy[4] = {0,-1,0,1}; //ESWN
int dx[4] = {1,0,-1,0};

int main() {
    cin >> dirs;

    int direction = 3;
    int x = 0;
    int y = 0;

    for(auto d : dirs)
    {
        if(d == 'L')
        {
            direction = (direction - 1 + 4)%4;
           

        }
        if(d == 'R')
        {
             direction = (direction + 1)%4;
        }
        if(d == 'F')
        {
            x += dx[direction];
            y += dy[direction];

        }


    }

    cout << x << ' ' << y;

    // Please write your code here.

    return 0;
}