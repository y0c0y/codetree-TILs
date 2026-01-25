#include <bits/stdc++.h>

using namespace std;

int n;
int arr[10];

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}

bool compare(int a, int b)
{
    return a > b;
}

int main() {
    cin >> n;

    int total = 1;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        total *= arr[i];
    }

   sort(arr, arr + 10, compare);

   int allGCD = 1;

    for (int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            allGCD *= gcd(arr[i], arr[j]);
        }
    }

    cout << total/allGCD;


    


   

    return 0;
}