#include <bits/stdc++.h>

using namespace std;

int X;

int minTime = INT_MAX;

void f(int space, int acc, int time)
{
    if(acc <= 0) return;
    if(time >= minTime) return;

    if(space >= X) 
    {
        if(space == X && acc == 1) 
        {
            if(time < minTime){
                // cout << "Changed : " << minTime << ' ' << time << '\n';
                minTime = time;
            }
        }
        return;
    }

    // cout << space << ' ' << acc << ' ' << time << '\n';

    f(space + acc, acc - 1, time + 1);
    f(space + acc, acc, time + 1);
    f(space + acc, acc + 1, time + 1);
    
}

int main() {
    cin >> X;

    f(0,1,0);

    cout<< minTime + 1;

    return 0;
}