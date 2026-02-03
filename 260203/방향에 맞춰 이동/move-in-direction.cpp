#include <iostream>

using namespace std;

int n;
char dir[100];
int dist[100];


int dy[4] = {0, 0, -1, 1};
int dx[4] = {1,-1, 0, 0};

int changeDirChToInt(char d)
{
    if(d =='E') return 0;
    if(d =='W') return 1;
    if(d =='S') return 2;
    if(d =='N') return 3;

}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
    }

    int x = 0;
    int y = 0;
    int direction = 0;

    for (int i = 0; i < n; i++) {

        direction = changeDirChToInt(dir[i]);

        x += dist[i] * dx[direction];
        y += dist[i] * dy[direction];
    }

    cout << x << ' ' << y;

    // Please write your code here.

    return 0;
}