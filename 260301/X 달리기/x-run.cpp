#include <iostream>

using namespace std;

int main() {
    long long X; // 거리가 클 수 있으므로 long long 권장
    cin >> X;

    long long pos = 0;   // 현재 위치
    long long v = 1;     // 현재 속도
    int time = 0;

    while (pos < X) {
        time++;
        pos += v;

        if (pos == X) break;

        // 다음 단계 결정 로직:
        // (v+1)로 올렸을 때, 나중에 1까지 줄이는 데 필요한 최소 거리 계산
        long long next_v = v + 1;
        long long required_dist = (next_v * (next_v + 1)) / 2;

        if (pos + required_dist <= X) {
            v++; // 속도 증가 가능
        } else if (pos + (v * (v - 1)) / 2 <= X) {
            // 현재 속도 v를 유지해도 멈출 수 있는지 확인
            // (속도를 유지하는 것이 더 빠를 때)
        } else {
            v--; // 당장 줄여야 함
        }
    }

    cout << time + 1 << endl;
    return 0;
}