#include <iostream>
#include <climits>

using namespace std;

int N;
// int A[100];

int main() {
    cin >> N;

    int tmp;


    int max_val1 = INT_MIN + 1;
    int max_val2 = INT_MIN;

    for (int i = 0; i < N; i++) {
        cin >> tmp;

        if(tmp > max_val2) max_val2 = tmp;
        if(max_val2 > max_val1)
        {
            tmp = max_val2;
            max_val2 = max_val1;
            max_val1 = tmp;
        }
    }

    cout << max_val1 << ' ' << max_val2;





    // Please write your code here.

    return 0;
}
