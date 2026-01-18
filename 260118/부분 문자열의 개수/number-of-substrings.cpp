#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    string A;
    string B;

    getline(cin, A);
    getline(cin, B);

    bool all = true;

    int len_A = A.length();
    int len_B = B.length();

    int cnt = 0;

    for(int i = 0; i < len_A - len_B + 1 ; i++)
    {
        all = true;

        for(int j = 0 ; j < len_B ; j ++)
        {
            if(A[i + j] != B[j]) all = false;
        }

        if(all) cnt++;
    }

    cout<<cnt;
    return 0;
}