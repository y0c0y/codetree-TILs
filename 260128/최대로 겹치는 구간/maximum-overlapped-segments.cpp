#include <bits/stdc++.h>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;

    int arr[201] = {};


    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];

        for(int j = x1[i] + 100 ; j < x2[i] + 100; j++)
        {
            arr[j]++;
        }
    }

    int result = *max_element(arr, arr+ 201);

    cout << result;

    // Please write your code here.

    return 0;
}