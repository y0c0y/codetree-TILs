#include <iostream>
#include <unordered_map>

using namespace std;

// 데이터를 담는 가벼운 구조체
struct Tile {
    int w = 0;
    int b = 0;
    int color = 0; // 1: W, 2: B, 3: G
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // 해시 맵 사용 (속도 향상)
    unordered_map<int, Tile> board;
    int cur = 0;

    for (int i = 0; i < n; i++) {
        int x; char dir;
        cin >> x >> dir;

        if (dir == 'L') {
            int target = cur - x + 1;
            for (int j = cur; j >= target; j--) {
                auto& t = board[j]; // 참조자를 사용해 단 한 번만 접근
                if (t.color == 3) continue;

                t.w++;
                if (t.w >= 2 && t.b >= 2) t.color = 3;
                else t.color = 1;
            }
            cur = target;
        } else {
            int target = cur + x - 1;
            for (int j = cur; j <= target; j++) {
                auto& t = board[j];
                if (t.color == 3) continue;

                t.b++;
                if (t.w >= 2 && t.b >= 2) t.color = 3;
                else t.color = 2;
            }
            cur = target;
        }
    }

    int w_ans = 0, b_ans = 0, g_ans = 0;
    for (auto const& [pos, t] : board) {
        if (t.color == 1) w_ans++;
        else if (t.color == 2) b_ans++;
        else if (t.color == 3) g_ans++;
    }

    cout << w_ans << " " << b_ans << " " << g_ans << "\n";

    return 0;
}