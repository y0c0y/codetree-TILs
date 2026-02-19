#include <bits/stdc++.h>

using namespace std;

int N;
int x[100];
int y[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    int maxVal = INT_MIN;

    int space = 0;

    for (int i = 0; i < N - 2; i++) {
        for (int j = i+1; j < N - 1; j++) {
        for (int k = j + 1; k < N; k++) {
       if(y[i] == y[j] && x[k] == x[j])
       {
            space = abs(x[i] - x[j]) * abs(y[k] - y[j]);
       }
       else if(y[k] == y[j] && x[i] == x[j])
       {
            space = abs(x[k] - x[j]) * abs(y[i] - y[j]);
       }
       else if(y[i] == y[j] && x[k] == x[i])
       {
            space = abs(x[i] - x[j]) * abs(y[k] - y[i]);
       }
       else if(y[i] == y[k] && x[i] == x[j])
       {
            space = abs(x[i] - x[k]) * abs(y[i] - y[j]);
       }
       else if(y[i] == y[k] && x[k] == x[j])
       {
            space = abs(x[i] - x[k]) * abs(y[k] - y[j]);
       }
       else if(y[k] == y[j] && x[k] == x[i])
       {
            space = abs(x[k] - x[j]) * abs(y[k] - y[i]);
       }
       else 
       {
            space = 0;
       }

       maxVal = max(maxVal, space);
    }
    }
    }

    cout << maxVal;

    // Please write your code here.

    return 0;
}