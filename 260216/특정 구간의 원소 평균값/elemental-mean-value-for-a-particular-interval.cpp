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

    for (int i = 0; i < n; i++) 
    {
        for (int j = i; j < n; j++) 
        {
            
            if(i == j) cnt++;
            else
            {
                tmp = accumulate(arr + i, arr + j + 1, 0);

                tmp /= (j - i);

                // cout << tmp << '\n';

                if(find(arr + i, arr+j + 1, tmp) != arr+j + 1)
                {
                    cnt++;
                }

            }

        }

    }

cout << cnt;

    // Please write your code here.

    return 0;
}