#include <iostream>

using namespace std;

int N;
int a, b, c;

int main() {
    cin >> N;
    cin >> a >> b >> c;

    int cnt = 0;

    bool flagA = false;
    bool flagB = false;
    bool flagC = false;

    for(int i = 1; i <=N; i++)
    {
        flagA = abs(a - i) <= 2;
        
        for(int j = 1; j <=N; j++)
        {
            flagB = abs(b - j) <= 2;

            for(int k = 1; k <=N; k++)
            {
                flagC = abs(c-k) <= 2;

                if(flagA || flagB || flagC) cnt++;
            }   
        }

    }

    cout<< cnt;

    // Please write your code here.

    return 0;
}