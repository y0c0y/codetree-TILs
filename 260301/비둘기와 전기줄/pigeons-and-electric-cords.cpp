#include <bits/stdc++.h>

using namespace std;

int N;
int pigeon[100];
int position[100];

int main() {
    cin >> N;

    int cross[11][2] ={};

    for (int i = 0; i < N; i++) {
        cin >> pigeon[i] >> position[i];
    }

    int idx = 0;

    for (int i = 0; i < N; i++) {

        idx = pigeon[i];

        if(cross[idx][0] > 0 && cross[idx][1] == position[i]) continue;

        cross[idx][0]++;
        cross[idx][1] = position[i];
    }

    int cnt = 0;

    for (int i = 1; i < 11; i++) {

       if(cross[i][0] > 1) cnt += cross[i][0] - 1;
    }

    cout << cnt;



    // Please write your code here.

    return 0;
}