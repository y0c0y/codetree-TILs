#include <iostream>

using namespace std;

int n, m;
int arr[100];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.

    if(n  % (2*m +1) != 0 ) cout << n /(2*m+1) + 1;
    else cout << n /(2*m+1);

    return 0;
}