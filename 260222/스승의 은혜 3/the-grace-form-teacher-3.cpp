#include <bits/stdc++.h>

using namespace std;

int N, B;
int P[1000];
int S[1000];


int main() {
    cin >> N >> B;

    int maxVal = INT_MIN;

    for (int i = 0; i < N; i++) {
        cin >> P[i] >> S[i];
    }

    int total = 0;
    int cnt = 0;

    for (int i = 0; i < N; i++) {
        total = 0;
        cnt = 0;

        total += P[i]/2 + S[i];

        if(total <= B)
        {
            cnt++;
            for (int j = 0; j < N; j++) {
                if(i == j) continue;
                total += P[j] + S[j];
                if(total <= B) cnt++;
                else break;
            }
        }

        maxVal = max(maxVal, cnt);


        
    }

    cout <<  maxVal;


   

    // Please write your code here.

    return 0;
}