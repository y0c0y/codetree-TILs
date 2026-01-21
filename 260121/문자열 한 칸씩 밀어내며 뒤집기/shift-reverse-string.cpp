#include <bits/stdc++.h>

using namespace std;

string input_str;
int q;

int main() {
    cin >> input_str >> q;

    int len = input_str.length();
    string tmp;

    for (int i = 0; i < q; i++) {
        int query_type;
        cin >> query_type;

        switch(query_type)
        {
            case 1:
            tmp = input_str.substr(1, len-1) + input_str.substr(0,1);
            cout << tmp << "\n";
            input_str = tmp;

            break;
            case 2:
            tmp = input_str.substr(len-1, 1) + input_str.substr(0,len-1);
            cout << tmp << "\n";
            input_str = tmp;
            break;

            case 3:
            reverse(input_str.begin(), input_str.end());
            cout << input_str << "\n";
            break;
            
            default:
            break;
        }
    }

    // Please write your code here.

    return 0;
}
