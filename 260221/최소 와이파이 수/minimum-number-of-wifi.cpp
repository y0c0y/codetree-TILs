#include <iostream>

using namespace std;

int n, m;
int arr[100];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    const int ori = m + 1;
    
    bool flag = false;
    int cnt = 0;

    int result = 0;

    int i = 0;

    while(i < n)
    {
        if(cnt == 0)
        {
            cnt = ori;
            flag = false;
            result ++;
            i+= ori;
        }
        else
        {
            i++;
        }

        if(arr[i]) flag = true;

        if(flag) cnt--;
    }
  
    cout << result;

    return 0;
}