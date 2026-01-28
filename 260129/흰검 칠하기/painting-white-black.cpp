#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// 지점의 변화(이벤트)를 저장
struct Event {
    int pos;
    int type; // 1: 시작, -1: 끝
    char color;
    int id;   // 명령의 순서 (마지막 색깔 확인용)
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<Event> events;
    int cur = 0;
    for (int i = 0; i < n; i++) {
        int dist; char dir;
        cin >> dist >> dir;
        int l, r;
        if (dir == 'L') { l = cur - dist; r = cur; cur -= dist; }
        else { l = cur; r = cur + dist; cur += dist; }
        
        events.push_back({l, 1, (dir == 'L' ? 'W' : 'B'), i});
        events.push_back({r, -1, (dir == 'L' ? 'W' : 'B'), i});
    }

    // 좌표 순으로 정렬
    sort(events.begin(), events.end(), [](const Event& a, const Event& b) {
        return a.pos < b.pos;
    });

    int white_ans = 0, black_ans = 0, gray_ans = 0;
    int w_cnt = 0, b_cnt = 0;
    set<pair<int, char>> active_segments; // {id, color} 현재 겹쳐있는 구간들

    for (size_t i = 0; i < events.size() - 1; i++) {
        // 현재 위치에서 이벤트 처리
        if (events[i].type == 1) {
            if (events[i].color == 'W') w_cnt++; else b_cnt++;
            active_segments.insert({events[i].id, events[i].color});
        } else {
            if (events[i].color == 'W') w_cnt--; else b_cnt--;
            // id를 찾아 제거 (C++17에서는 erase(iterator) 등으로 깔끔하게 처리)
            active_segments.erase({events[i].id, events[i].color});
        }

        // 다음 좌표까지의 구간 길이
        int len = events[i + 1].pos - events[i].pos;
        if (len == 0) continue;

        // 구간 성질 판단
        if (w_cnt >= 2 && b_cnt >= 2) {
            gray_ans += len;
        } else if (!active_segments.empty()) {
            // 마지막으로 추가된(id가 가장 큰) 구간의 색깔 확인
            char last_c = active_segments.rbegin()->second;
            if (last_c == 'W') white_ans += len;
            else black_ans += len;
        }
    }

    cout << white_ans << " " << black_ans << " " << gray_ans << "\n";

    return 0;
}