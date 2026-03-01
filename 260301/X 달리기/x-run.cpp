#include <bits/stdc++.h>

using namespace std;

int X;
vector<pair<int, int>> result;

void f(int space, int acc, int time)
{
    if(space >= X) 
    {
        if(space == X && acc == 1) 
        {
            pair<int, int> tmp = make_pair(acc, time);
            result.push_back(tmp);
        }
        return;
    }

    if(acc - 1 > 0) f(space + acc, acc - 1, time + 1);
    f(space + acc, acc, time + 1);
    f(space + acc, acc + 1, time + 1);
    
}

int main() {
    cin >> X;

    f(0,1,0);

    sort(result.begin(), result.end());

    int acc, time;

    tie(acc, time) = result[0];

    cout<< time + 1;



    return 0;
}