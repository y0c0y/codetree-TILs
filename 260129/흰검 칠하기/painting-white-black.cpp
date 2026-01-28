#include <iostream>
#include <vector>

using namespace std;

// 최대 이동 거리를 고려해 배열 크기 설정 (N=1000, x=100 기준 넉넉히 20만)
const int MAX = 200005;
const int OFFSET = 100000;

int white_cnt[MAX]; // 흰색으로 칠해진 횟수
int black_cnt[MAX]; // 검은색으로 칠해진 횟수
int tile_color[MAX]; // 0: 없음, 1: 흰색, 2: 검은색, 3: 회색

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int cur = OFFSET;

    for (int i = 0; i < n; i++) {
        int x;
        char dir;
        cin >> x >> dir;

        if (dir == 'L') {
            // 왼쪽으로 이동하며 x칸 칠하기
            int target = cur - x + 1;
            for (int j = cur; j >= target; j--) {
                if (tile_color[j] == 3) continue; // 이미 회색이면 패스

                white_cnt[j]++;
                if (white_cnt[j] >= 2 && black_cnt[j] >= 2) {
                    tile_color[j] = 3;
                } else {
                    tile_color[j] = 1; // 흰색
                }
            }
            cur = target; // 마지막 위치에 서기
        } else {
            // 오른쪽으로 이동하며 x칸 칠하기
            int target = cur + x - 1;
            for (int j = cur; j <= target; j++) {
                if (tile_color[j] == 3) continue;

                black_cnt[j]++;
                if (white_cnt[j] >= 2 && black_cnt[j] >= 2) {
                    tile_color[j] = 3;
                } else {
                    tile_color[j] = 2; // 검은색
                }
            }
            cur = target;
        }
    }

    int w = 0, b = 0, g = 0;
    for (int i = 0; i < MAX; i++) {
        if (tile_color[i] == 1) w++;
        else if (tile_color[i] == 2) b++;
        else if (tile_color[i] == 3) g++;
    }

    cout << w << " " << b << " " << g << "\n";

    return 0;
}