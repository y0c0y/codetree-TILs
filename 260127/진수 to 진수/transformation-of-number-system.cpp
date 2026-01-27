#include <bits/stdc++.h>

using namespace std;

int a, b;
string n;

int main() {
    cin >> a >> b;
    cin >> n;

    int len = n.length();

    int num = 0;
    
    for(int i  =0; i < len; i++)
    {
        num = num * a + (n[i] - '0');
    }

    vector<int> arr;
    int tmp = 0;
    while(num >= b)
    {
        tmp = num % b;
        
        arr.push_back(tmp);

        num/=b;      
    }

    arr.push_back(num);

    reverse(arr.begin(), arr.end());

    for(auto k : arr)
    {
        cout<<k;
    }

    // Please write your code here.

    return 0;
}