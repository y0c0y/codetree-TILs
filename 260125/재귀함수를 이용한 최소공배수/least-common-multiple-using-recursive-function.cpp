#include <bits/stdc++.h>

using namespace std;

int n;
int arr[10];

// int gcd(int a, int b)
// {
//     if(b == 0) return a;
//     return gcd(b, a%b);
// }

// int lcm(int a, int b)
// {
//     return a * b / gcd(a,b);
// }

// bool compare(int a, int b)
// {
//     return a > b;
// }

int main() {

    vector<int> brr;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = 1;

    bool exits = false;

    int cnt = 0;

    while(cnt != n)
    {
        for (int i = 0; i < n; i++) 
        {
            if(max % arr[i] != 0) 
            {
                exits = true;
                break;
            }
            else
            {
                cnt++;
            }
        }

        if(exits)
        {
            cnt = 0;
            exits = false;
            max++;
        }
    }

    cout << max;

//    sort(arr, arr + 10, compare);

//    int allGCD = 1;

//     for (int i = 0; i < n - 1; i++)
//     {
//         for(int j = i + 1; j < n; j++)
//         {
//             brr.push_back(gcd(arr[i], arr[j]));
//         }
//     }

//     sort(brr.begin(), brr.end());

//     for(auto j : brr)
//     {
//         cout << j << ' ';
//     }

    


   

    return 0;
}