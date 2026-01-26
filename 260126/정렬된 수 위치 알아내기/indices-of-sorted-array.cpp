#include <bits/stdc++.h>

using namespace std;

int N;
int sequence[1000];

bool cmp (const tuple<int, bool>& a, const tuple<int, bool>& b)
{
    return a < b;
}

int main() {

    vector<tuple<int, bool>> arr;
    cin >> N;
    tuple<int, bool> tmp = make_tuple(0, false);

    for (int i = 0; i < N; i++) {
        cin >> sequence[i];

        tmp = make_tuple(sequence[i], false);
        arr.push_back(tmp);
    }

    sort(arr.begin(), arr.end(), cmp);

    int num = 0;

    bool flag = false;

    for(int i = 0; i < N; i++) 
    {
        for(int j = 0; j < N; j++) 
        {
            tie(num,flag) = arr[j];

            if(flag) continue;
            if(sequence[i] == num)
            {
                cout << j  + 1 << ' ';
                arr[j] = make_tuple(num, true);
                break;
            }
        }
    }

    // Please write your code here.

    return 0;
}
