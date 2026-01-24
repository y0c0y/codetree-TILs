#include <iostream>

using namespace std;

int n;
int arr[100];


int FindMax(int max, int i)
{
    if(i == n) return max;


    if(arr[i] > max) max = arr[i];
    
    i++;

   return FindMax(max, i);

}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.

    cout << FindMax(arr[0], 0);

    return 0;
}