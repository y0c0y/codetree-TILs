#include <bits/stdc++.h>

using namespace std;

int n;
int a[10], b[10];

int main() {
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    
    for (int i = a[n-1]; i <= b[n-1]; i++) {
        arr.push_back(i);
    }

    int tmp = 0;

            vector<int> brr;
    int len = arr.size();

    for (int i = n - 2; i >= 0; i--) {

        brr.clear();

        len = arr.size();

        while(len > 0)
        {
            tmp = arr[len - 1];
            arr.pop_back();
            len--;

            if(tmp % 2 != 0) continue;

            // cout << tmp << '\n';

            tmp /= 2;

            if(tmp >= a[i] && tmp <= b[i])
            {
                brr.push_back(tmp);
            }
        }

        arr = brr;
    }

    brr.clear();
    len = arr.size();

    while(len > 0)
    {
        tmp = arr[len - 1];
        arr.pop_back();
        len--;

        if(tmp % 2 != 0) continue;

        // cout << tmp << '\n';
        tmp /= 2;
        brr.push_back(tmp);
    }

    tmp = *min_element(brr.begin(), brr.end());

    cout << tmp;

    // Please write your code here.

    return 0;
}