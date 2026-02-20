#include <iostream>

using namespace std;

int n, m;
int arr[100];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    const int ori = m;
    
    bool flag = false;
    int cnt = 0;

    int result = 0;

    for(int i = 0; i < n ; i++)
    {
        // cout << i << ' ' << result << ' ' << cnt << '\n';

        if(arr[i]) 
        {
            result++;
            i += 2 * m;
        }
    }
  
    cout << result;

    return 0;
}