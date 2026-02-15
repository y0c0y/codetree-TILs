#include <bits/stdc++.h>

using namespace std;

int N, S;
int arr[100];

int main() {
    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int minVal = INT_MAX;
    int total = 0;

    for (int i = 0; i < N; i++) // 첫번째 제외 숫자
    {
        for (int j = 0; j < i; j++) // 첫번째 제외 숫자 그 이전에 있는 범위
        {
            total = 0;

            for (int k = 0; k < N; k++) 
            {
                if(k != i && k != j)
                {
                    total += arr[k];
                }
            }

            total  = abs(S - total);

            if(minVal > total) minVal = total;
        }



        for (int j = i + 1; j < N; j++) // 나머지
        {
            total = 0;

            for (int k = 0; k < N; k++) 
            {
                if(k != i && k != j)
                {
                    total += arr[k];
                }
            }

            total  = abs(S - total);

            if(minVal > total) minVal = total;

        }

    }

    cout << minVal;


    // Please write your code here.

    return 0;
}