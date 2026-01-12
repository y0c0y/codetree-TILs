#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int tmp;
    int max_val = 0;

    for(int i = 0; i < 10; i ++)
    {
        cin >> tmp;
        if(tmp > max_val) max_val = tmp;

    }

    cout << max_val;
    return 0;
}