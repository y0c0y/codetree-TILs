#include <iostream>

using namespace std;

int n, m;
int arr[100];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    const int ori = 2 * m;
    
    bool flag = false;
    int cnt = ori;

    int result = 0;

    for (int i = 0; i < n; i++)
    {      
        if(arr[i]) flag = true;

        if(flag)
        {
             if(cnt == 0)
            {
                // cout << i << ' ' << result << '\n';
                result++;
                cnt = ori;
                flag = false;
            }
            else
            {
                cnt--;
            }
            
        }

       
    }

    cout << result;

    return 0;
}