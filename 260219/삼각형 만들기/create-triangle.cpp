#include <bits/stdc++.h>
using namespace std;

int N;
int x[100], y[100];

int main() {
    ios::sync_with_stdio(0); cin.tie(0); // 입출력 속도 향상
    
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    int maxArea2 = 0; // 2 * Area (정수 계산을 위해)

    // 세 점 i, j, k를 선택
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                // i를 직각의 정점으로 가정: (i, j)가 수직, (i, k)가 수평
                // 즉, x[i] == x[j] 이고 y[i] == y[k] 인 경우
                if (x[i] == x[j] && y[i] == y[k]) {
                    int area2 = abs(y[i] - y[j]) * abs(x[i] - x[k]);
                    maxArea2 = max(maxArea2, area2);
                }
            }
        }
    }

    cout << maxArea2;
    return 0;
}