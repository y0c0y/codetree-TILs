#include <iostream>
using namespace std;

int main() {
    // Please write your code here.


    int n,m;

    cin >> n >> m;

    int arr[n][m];
    int tmp;

    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> tmp;
            if(arr[i][j] == tmp)
            {
                cout << 0;
            }
            else
            {
                cout << 1;
            }
            cout <<' ';
        }

        cout << '\n';
    }
    return 0;
}