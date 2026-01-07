#include <iostream>
using namespace std;

int main() {


    int n = 0;

    cin >> n;

    int oriN = n;

    int k = n;

    n *=2;
    n--;

    for(int i = 0; i < oriN; i++)
    {
        k--;
        int j = 0;
        for(; j < k ; j++)
        {
            cout << ' ';
        }
        bool flag = true;
        for(; j < n - k; j++)
        {
            if(flag)
            {
                cout << '*';
            }
            else
            {
                cout <<' ';
            }

            flag = !flag;
        }
        for(; j < n ; j++)
        {
            
            cout << ' ';
        }
        cout << '\n';

    }

    k = 0;
     for(int i = 0; i < oriN - 1; i++)
    {
        k++;
       
        for(int j = 0; j < k ; j++)
        {
            cout << ' ';
        }
        bool flag = true;
        for(int j = k; j < n - k; j++)
        {
            if(flag)
            {
                cout << '*';
            }
            else
            {
                cout <<' ';
            }

            flag = !flag;
        }
        for(int j = n-k ; j < n ; j++)
        {
            
            cout <<' ';
        }
        cout << '\n';

    }
    
    return 0;
}