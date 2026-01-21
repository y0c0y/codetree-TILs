#include <bits/stdc++.h>

using namespace std;

string input_str;
int q;

int main() {
    cin >> input_str >> q;

    int len = input_str.length();

    for (int i = 0; i < q; i++) {
        int query_type;
        cin >> query_type;

        switch(query_type)
        {
            case 1:
            input_str = input_str.substr(1, len-1) + input_str.substr(0,1);
            break;

            case 2:
            input_str = input_str.substr(len-1, 1) + input_str.substr(0,len-1);
            break;

            case 3:
            reverse(input_str.begin(), input_str.end());
            break;
            
            default:
            break;
        }
            cout << input_str << "\n";
    }

    // Please write your code here.

    return 0;
}
