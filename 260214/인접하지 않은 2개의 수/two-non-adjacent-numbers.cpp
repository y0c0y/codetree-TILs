#include <bits/stdc++.h>


using namespace std;

int n;
int numbers[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int maxVal=INT_MIN;

    for(int i = 0; i < n;i++)
    {
        for(int j = i - 2; j >= 0; j--)
        {
            maxVal = max(maxVal, numbers[i]+numbers[j]);
        }

        for(int j = i +2; j < n;j++)
        {
            maxVal = max(maxVal, numbers[i]+numbers[j]);
        }
    }

    cout<<maxVal;





    // Please write your code here.

    return 0;
}