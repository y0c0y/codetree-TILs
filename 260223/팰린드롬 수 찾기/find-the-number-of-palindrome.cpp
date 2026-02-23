#include <bits/stdc++.h>

using namespace std;

int X, Y;

int main() {
    cin >> X >> Y;

    // Please write your code here.


    int cnt = 0;
    
    string tmp;

    int l, r;

    bool flag = false;

    for(int i = X; i <= Y; i++)
    {
        tmp = to_string(i);

        l = 0;
        r = tmp.length() - 1;

        flag = false;

        while(l <= r)
        {
            if(tmp[l] != tmp[r]) 
            {
                flag = false;
                break;
            }
            else
            {
                flag = true;
                l++;
                r--;
            }
        }

        if(flag) cnt++;
    }

    cout<< cnt;

    return 0;
}