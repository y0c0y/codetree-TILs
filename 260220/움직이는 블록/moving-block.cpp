#include <iostream>
#include <algorithm>

using namespace std;

int n;
int blocks[10000];


bool cmp(const int & a, const int & b)
{
    return a > b;

}

int main() {
    cin >> n;

    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> blocks[i];
        total += blocks[i];
    }

    total /= n;

    sort(blocks, blocks + n, cmp);

    int result = 0 ;

    for (int i = 0; i < n; i++) {
       if(blocks[i] > total) result += blocks[i] - total;
    }

    cout << result;

    // Please write your code here.

    return 0;
}