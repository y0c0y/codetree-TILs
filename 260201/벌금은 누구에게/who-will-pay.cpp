#include <iostream>

using namespace std;

int N, M, K;
int student[10000];

int main() {
    cin >> N >> M >> K;

    int first = -1;

    int check[N + 1] = {};

    for (int i = 0; i < M; i++) {
        cin >> student[i];
    }

    for (int i = 0; i < M; i++) {
        
        check[student[i]]++;

        if(first == -1 && check[student[i]] >= K) 
        {
            first = student[i];
        }
    }
    cout << first;

    // Please write your code here.

    return 0;
}