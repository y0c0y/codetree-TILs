#include <iostream>
using namespace std;

int main() {
    // Please write your code here.


    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};

    char ch;
    cin >> ch;

    int cnt = 0;

    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if(arr[i][2] == ch || arr[i][3] == ch)
        {
            cout << arr[i] << '\n';
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}