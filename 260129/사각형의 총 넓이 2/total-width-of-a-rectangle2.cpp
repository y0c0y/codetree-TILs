#include <iostream>

using namespace std;

const int OFFSET = 100;

const int LIMIT = 2*OFFSET + 1;

int arr[LIMIT][LIMIT] = {{},};

int N;
int x1[10], y1[10];
int x2[10], y2[10];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];


        for(int y = y1[i]; y < y2[i]; y++)
        {
            for(int x = x1[i]; x < x2[i]; x++)
            {
                arr[y + OFFSET][x + OFFSET]++;
            }
        }
    }

    int cnt = 0;

    for(int y = 0; y < LIMIT; y++)
    {
        for(int x = 0; x < LIMIT; x++)
        {
            if(arr[y][x]) cnt++;
        }
    }


    cout << cnt;



    // Please write your code here.

    return 0;
}