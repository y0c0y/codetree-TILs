#include <bits/stdc++.h>

using namespace std;

int abilities[6];

int main() {
    for (int i = 0; i < 6; i++) {
        cin >> abilities[i];
    }

    long long total = accumulate(abilities, abilities + 6, 0);
    long long sum1 = 0;
    long long sum2 = 0;
    long long minVal = LLONG_MAX;

    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            for (int k = j + 1; k < 6; k++) {

                sum1 = abilities[i] + abilities[j] + abilities[k];

                sum2 = total - sum1;

                minVal = min(minVal, abs(sum1 - sum2));
            }
        }
    }

    cout << minVal;

    // Please write your code here.

    return 0;
}