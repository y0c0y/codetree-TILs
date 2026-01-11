#include <iostream>
using namespace std;

int main() {
    // Please write your code here.


    int n, tmp;

    cin >> n;

    int arr[n];
    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
       cin >> tmp;
       
       if(tmp % 2 ==0)
       {
         arr[cnt] = tmp;
         cnt++;
       }
       
    }

for(int i = 0; i < cnt ; i++)
{
    cout << arr[i] << ' ';
}
    

    return 0;
}