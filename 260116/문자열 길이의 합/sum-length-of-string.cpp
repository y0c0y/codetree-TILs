#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    string str;
    int sum_len = 0;
    int cnt_a = 0;
    int len;

    for(int i = 0; i < n;i++)
    {
        cin >> str;

        sum_len += str.length();
        
        if(str[0] == 'a')
        {
            cnt_a++;
        }
    }

    cout << sum_len << ' ' << cnt_a;
    return 0;
}