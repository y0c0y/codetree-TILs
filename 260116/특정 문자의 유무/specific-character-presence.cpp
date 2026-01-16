#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string str;

    string str1 = "ee";
    string str2 = "ab";

    bool flag_str1 = false;
    bool flag_str2 = false;

    cin >> str;

    int len = str.length();
    int len1 = str1.length();
    int len2 = str2.length();

    for(int i = 0; i < len - len1 + 1; i++)
    {
        bool all_same = true;

        for(int j = 0; j < len1; j++)
        {
            if(str[i + j] != str1[j]) all_same = false;
        }

        if(all_same) flag_str1 = true;
    }

    for(int i = 0; i < len - len2 + 1; i++)
    {
        bool all_same = true;

        for(int j = 0; j < len2; j++)
        {
            if(str[i + j] != str2[j]) all_same = false;
        }

        if(all_same) flag_str2 = true;
    }

    if(flag_str1) cout << "Yes";
    else cout<< "No";

    cout <<' ';

    if(flag_str2) cout << "Yes";
    else cout<< "No";
    return 0;
}