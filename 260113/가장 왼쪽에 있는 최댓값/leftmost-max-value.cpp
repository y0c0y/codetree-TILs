#include <iostream>
#include <climits>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }


    int range = N;
    int max_val = INT_MIN;
    int max_idx = 0;

    while(true)
    {

        // cout << range << '\n';
        for (int i = 0; i < range; i++) 
        {
            if(arr[i] > max_val)
            {
                max_val = arr[i];
                max_idx = i;
            }
        }

        range = max_idx;

        cout << range + 1 << ' ';

        if(range == 0) break;

        max_val = INT_MIN;
        max_idx = 0;
    }

    return 0;
}
