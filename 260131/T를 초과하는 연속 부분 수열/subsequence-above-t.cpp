#include <bits/stdc++.h>
using namespace std;

int n, t;
int arr[1000];

int main() {
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int  cnt  = 0;
    int maxCnt = numeric_limits<int>::min();

    for(int i=0;i<n -1;i++)
    {
        if( t < arr[i])cnt++;
        else
        { 
            if(cnt>maxCnt) maxCnt = cnt;
            cnt = 0;
        }
    }
    if(cnt>maxCnt) maxCnt =cnt;

    cout << maxCnt;

    // Please write your code here.

    return 0;
}
