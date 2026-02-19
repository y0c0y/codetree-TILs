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
            space = abs(x[i] - x[j]) * abs(y[k] - y[j])
       }
       else if(y[i] == y[j] && x[k] == x[j])
       {
            space = abs(x[i] - x[j]) * abs(y[k] - y[j])
       }
       else if(y[i] == y[j] && x[k] == x[j])
       {
            space = abs(x[i] - x[j]) * abs(y[k] - y[j])
       }
       else if(y[i] == y[j] && x[k] == x[j])
       {
            space = abs(x[i] - x[j]) * abs(y[k] - y[j])
       }
       else if(y[i] == y[j] && x[k] == x[j])
       {
            space = abs(x[i] - x[j]) * abs(y[k] - y[j])
       }
       else if(y[i] == y[j] && x[k] == x[j])
       {
            space = abs(x[i] - x[j]) * abs(y[k] - y[j])
       }
       else if(y[i] == y[j] && x[k] == x[j])
       {
            space = abs(x[i] - x[j]) * abs(y[k] - y[j])
       }
       else if(y[i] == y[j] && x[k] == x[j])
       {
            space = abs(x[i] - x[j]) * abs(y[k] - y[j])
       }
    }
    }
    }

    // Please write your code here.

    return 0;
}