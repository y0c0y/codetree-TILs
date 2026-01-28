#include <bits/stdc++.h>

using namespace std;

int N, K;
int A[100], B[100];

int main() {
    cin >> N >> K;

    int arr[N + 1] = {};

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
    }

    for (int i = 0; i < K; i++) {
        for(int j = A[i]; j<= B[i]; j++) arr[j]++;
    }


    int m = *max_element(arr, arr + N + 1);

    cout << m ;




    // Please write your code here.

    return 0;
}