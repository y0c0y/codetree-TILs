#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int sum = 0;
    string result;

    int n = 0;
    int tmp;

    cin >> n;

    for(int i = 0; i < n ; i++)
    {
        cin >> tmp;

        sum += tmp;
    }

    string str = to_string(sum);

    int len = str.length();

    result = str.substr(1, len - 1) + str.substr(0, 1);

    cout << result;


    return 0;
}