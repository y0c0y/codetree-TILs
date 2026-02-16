#include <bits/stdc++.h>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    double tmp = 0;
    int cnt = 0;

    vector<int> v;

    for (int i = 0; i < n; i++) 
    {
        for (int j = i; j < n; j++) 
        {

            v.assign(arr + i, arr + j + 1);
            
            tmp = accumulate(v.begin(), v.end(), 0);
            tmp /= v.size();

            // cout << v.size() << ' ' << tmp << '\n';

            if(find(v.begin(), v.end(), tmp) != v.end())
            {
                cnt++;
            }

        }

    }

cout << cnt;

    // Please write your code here.

    return 0;
}