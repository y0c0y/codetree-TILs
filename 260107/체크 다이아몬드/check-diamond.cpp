#include <iostream>
using namespace std;

int main() {


    int n = 0;

    cin >> n;

    int k = 0;

    n *=2;
    n--;

    for(int i = 0; i < n; i++)
    {
        if(i == n/2) cout << '*';
        else cout << ' ';
        for(int j = 1; j < n-1; j++)
        {
            if(i%2 != 0)
            {
                if(j%2 ==0)
                {
                    cout << ' ';
                }
                else{
                    cout << '*';
                }

            }
            else
            {
                 if(j%2 ==0)
                {
                    cout << '*';
                }
                else{
                    cout << ' ';
                }
            }
        }

        if(i == n/2) cout << '*';
        else cout << ' ';

        cout << '\n';

    }
    
    return 0;
}