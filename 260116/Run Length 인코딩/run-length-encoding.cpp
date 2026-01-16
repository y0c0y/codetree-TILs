#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    // Please write your code here.

    int cnt = 1;
    int len = A.length();

    string result = "";

    for(int i = 1; i < len; i++)
    {
        if(A[i-1] == A[i]) cnt++;
        else
        {

            // cout << A[i-1] << ' ' << i-1 <<'\n';
            // cout << cnt <<'\n';
            result += A[i-1];
            result += cnt + '0';
            cnt = 1;
        }
    }

    result += A[len-1];
    result += cnt + '0';

    cout << result.length()<<'\n';
    cout << result;

    return 0;
}
