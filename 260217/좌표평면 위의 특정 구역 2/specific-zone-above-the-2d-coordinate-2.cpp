#include <bits/stdc++.h>

using namespace std;

int N;
int x[100], y[100];

vector<pair<int,int>> points;

int main() {
    cin >> N;

    pair<int, int> tmp;

    int minSpace = INT_MAX;
    int space=0;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    int minX = INT_MAX,minY = INT_MAX,maxX = INT_MIN,maxY = INT_MIN;


    for(int i = 0; i < N; i++)
    {
        minX = INT_MAX,minY = INT_MAX,maxX = INT_MIN,maxY = INT_MIN;
        for(int j = 0; j < N; j++)
        {
            if(i == j) continue;

            minY = min(minY, y[j]);
            minX = min(minX, x[j]);
            maxY = max(maxY, y[j]);
            maxX = max(maxX, x[j]);
        }

        // cout << maxY << ' ' << maxX << ' ' << minY << ' ' << minX <<'\n';

        space = (maxY - minY) * (maxX - minX);

        minSpace = min(minSpace, space);
    }

    cout << minSpace;

    // Please write your code here.

    return 0;
}