#include <iostream>

using namespace std;

string A, B;


int findSameStr(int len_a, int len_b)
{
    bool exit = true;

    for(int i = 0; i < len_a - len_b + 1 ; i++)
    {
        for(int j= 0; j < len_b ; j++)
        {
            if(A[i+j] != B[j]) 
            {
                exit = false;
                break;
            }
        }

        if(exit) return i;

        exit = true;
    }

    return -1;
}

int main() {
    cin >> A;
    cin >> B;

    int idx = -1;
    int len_a = 0;
    int len_b = B.length();

    while(true)
    {
        len_a = A.length();

        idx = findSameStr(len_a, len_b);

        if(idx < 0) break;

        A.erase(idx, len_b);
    }

    cout << A;
    return 0;
}
