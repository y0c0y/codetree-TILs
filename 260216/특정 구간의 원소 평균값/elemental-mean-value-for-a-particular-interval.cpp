#include <bits/stdc++.h>

using namespace std;

int n;
int arr[100];
vector<int> vec;


int solution(int start, int end)
{
    int sum = accumulate(vec.begin() + start, vec.begin()+end, 0);
    return sum/(end-start);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vec.assign(arr, arr+n);

    int tmp = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++) 
    {
        for (int j = i; j < n; j++) 
        {
            tmp = solution(i, j);

            if(find(vec.begin()+i, vec.begin()+j, tmp) != vec.begin()+j)
            {
                cnt++;
            }

        }

    }

cout << cnt;

    // Please write your code here.

    return 0;
}