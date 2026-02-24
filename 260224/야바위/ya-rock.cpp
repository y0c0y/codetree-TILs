#include <bits/stdc++.h>

using namespace std;

int N;
int a[100], b[100], c[100];

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    int maxScore = 0;
    int score = 0;
    int idx = 0;

    for(int j = 1 ; j <=3 ; j++)
    {   
        int info[3] = {0,0,0};

        info[j - 1] = 1;

        score = 0;

        for (int i = 0; i < N; i++) 
        {
           swap(info[a[i] - 1],info[b[i] - 1]);
           if(info[c[i] - 1]) score++;
        }

        // cout << score <<'\n';

       if(score > maxScore)
       {
            maxScore = score;
            idx = j;
       }
    }

    cout << idx;

    // Please write your code here.

    return 0;
}