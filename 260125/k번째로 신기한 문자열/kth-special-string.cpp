#include <bits/stdc++.h>


using namespace std;

int n, k;
string t;



int main() {

    vector<string> str;

    cin >> n >> k >> t;

    string tmp;

    int len_t = t.length();

    for (int i = 0; i < n; i++) {
        cin >> tmp;

        if(tmp.substr(0, len_t) == t) str.push_back(tmp);
    }

    sort(str.begin(), str.end());


    cout << str[k - 1];

    return 0;
}