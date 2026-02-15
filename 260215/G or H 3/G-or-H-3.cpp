#include <bits/stdc++.h>

using namespace std;

const int limits = 101;
int N, K;
int x[100];
char c[100];

int info[limits];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> c[i];

        info[x[i]] = c[i] == 'G' ? 1 : 2;
    }

    int total = 0;
    int maxVal =  INT_MIN;

    for (int i = 1; i < limits - K + 1; i++) 
    {
        total = 0;

        for(int j = i; j <= i + K ;j++)
        {
            total += info[j];
        }

        maxVal = max(maxVal, total);
        
    }

    cout << maxVal;



    // Please write your code here.

    return 0;
}