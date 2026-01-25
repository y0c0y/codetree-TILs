#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> arr;

int main() {
    cin >> n;

    int tmp;
    for (int i = 0; i < n; i++) {
        
        cin >> tmp;
        arr.push_back(tmp);

        if(i % 2 == 0) 
        {
            sort(arr.begin(), arr.end());
            cout << arr[i/2] << ' ';
        }
    }

    return 0;
}