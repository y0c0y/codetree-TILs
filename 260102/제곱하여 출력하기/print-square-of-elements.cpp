#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n =0 ;

    cin >> n;

    int tmp = 0;

    for(int i = 0; i <n;i++)
    {
        cin >> tmp;
        cout << tmp *tmp << " ";
    }
    return 0;
}