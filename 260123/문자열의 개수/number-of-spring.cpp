#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.

    int cnt = 0;
    vector<string> arr;
    string str;

    while(true)
    {
        cin >> str;

        if(str == "0") break;

        cnt++;

        if(cnt % 2 != 0) 
        {
            arr.push_back(str);
        }
    }

    cout << cnt <<'\n';

    for(auto i : arr)
    {
        cout << i <<'\n';

    }
    return 0;
}