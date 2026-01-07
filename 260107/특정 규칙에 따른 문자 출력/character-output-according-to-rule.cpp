#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int tmp = 0;

    cin >> tmp;

    int k = tmp;

    for(int i = 0; i < tmp; i ++)
    {
        k--;
         for(int j = 0; j < k; j++)
        {
            cout << "  ";
            
        }
        for(int j = k; j < tmp; j++)
        {
            cout << "@ ";

        }
        cout << '\n';
    }

    k = tmp;

    for(int i = 0; i < tmp - 1; i ++)
    {
        k--;
         for(int j = 0; j < k; j++)
        {
            cout << "@ ";
            
        }
        for(int j = k; j < tmp; j++)
        {
            cout << "  ";

        }
        cout << '\n';
    }
    return 0;
}