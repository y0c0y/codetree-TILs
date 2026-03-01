#include <bits/stdc++.h>

using namespace std;

long long solve_min_time(long long X) {
    // 1. 이동 거리가 0인 경우 0초 반환
    if (X == 0) return 0;

    // 2. 피라미드의 정점(최대 속도) V 찾기
    // V^2 <= X 를 만족하는 최대 정수 V
    long long V = static_cast<long long>(sqrt(X));

    // 3. 기본 피라미드 구성 시 걸리는 시간 (1, 2, ..., V, ..., 2, 1)
    // 개수는 (2 * V - 1)개
    long long time = 2 * V - 1;

    // 4. 남은 거리 계산
    long long remaining_distance = X - (V * V);

    // 5. 남은 거리를 기존 속도 구간에 끼워 넣기 (그리디)
    // 남은 거리가 있을 때까지 속도 V 또는 그 이하의 속도를 유지하는 시간을 추가
    while (remaining_distance > 0) {
        if (remaining_distance >= V) {
            remaining_distance -= V;
        } else {
            // 남은 거리가 V보다 작으면 어떤 속도(1~V-1)든 하나를 골라 
            // 1초 더 유지하면 되므로 거리를 0으로 만들고 루프 종료
            remaining_distance = 0;
        }
        time++;
    }

    return time;
}

int main() {
    long long X; // 거리가 클 수 있으므로 long long 권장
    cin >> X;

    long long result = solve_min_time(X);

    cout << result << endl;
    return 0;
}