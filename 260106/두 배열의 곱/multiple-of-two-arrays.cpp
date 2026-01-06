#include <iostream>
using namespace std;

int main() {
    // Please write your code here.


    int arr[3][3];

    int brr[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> brr[i][j];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            int tmp = arr[i][j] * brr[i][j];
            cout << tmp << " ";
        }
        cout << "\n";
    }


    return 0;
}