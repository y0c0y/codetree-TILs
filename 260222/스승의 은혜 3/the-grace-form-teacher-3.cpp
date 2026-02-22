#include <bits/stdc++.h>

using namespace std;

int N, B;
int P[1000];
int S[1000];

int fun(int total, int i, bool useCoupon, int cnt)
{
    // cout << i << ' ' << total << '\n';

    if(i >= N || total > B) return cnt - 1;
    if(total == B) return cnt;

    int price = P[i];
    int shipping = S[i];

    int count[3] = {};

    if(total + price + shipping <= B)
    {
        count[0] = fun(total + price + shipping, i++, useCoupon, cnt + 1);
    }
    else if(total + price / 2 + shipping <= B && !useCoupon)
    {
        count[1] = fun(total + price / 2 + shipping, i++, true, cnt + 1);
    }
    else
    {
       count[2] = fun(total, i++, useCoupon, cnt);
    }

    int result = *max_element(count, count + 3);

    return result;
}

int main() {
    cin >> N >> B;

    vector<pair<int, int>> students;
    pair<int, int> tmp;

    int maxIdx = INT_MIN;

    int total = 0;

    for (int i = 0; i < N; i++) {
        cin >> P[i] >> S[i];
    }

    // for (int i = 0; i < N; i++) {
    //         for (int i = 0; i < N; i++) {
    //         cin >> P[i] >> S[i];
    //     }
    // }

    cout << fun(0, 0, false, 0);


   

    // Please write your code here.

    return 0;
}