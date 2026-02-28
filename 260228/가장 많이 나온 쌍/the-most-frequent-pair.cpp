#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[100], b[100];

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
    }

    int maxVal = 0;

    int tmpA = 0, tmpB = 0;

    for(int i = 0; i < m; i ++)
    {
        int cnt = 0;

        tmpA = a[i];
        tmpB = b[i];

        for(int j = 0; j < m; j++)
        {
            if((tmpA == a[j] && tmpB == b[j])||(tmpA == b[j] && tmpB == a[j])) cnt++;
        }

        maxVal = max(maxVal, cnt);

    }

    cout << maxVal;

    // Please write your code here.

    return 0;
}