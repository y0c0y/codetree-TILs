#include <iostream>
#include <algorithm>

using namespace std;

// 사각형의 좌표를 저장할 구조체
struct Rect {
    int x1, y1, x2, y2;

    // 사각형의 넓이 계산
    long long area() {
        return (long long)(x2 - x1) * (y2 - y1);
    }
};

// 특정 점 (x, y)가 사각형 r 안에 포함되는지 확인
bool is_inside(int x, int y, Rect r) {
    return x >= r.x1 && x <= r.x2 && y >= r.y1 && y <= r.y2;
}

int main() {
    Rect a, b;
    // a: 가려지는 광고판, b: 가리는 광고판
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;

    // 1. a의 네 꼭짓점 중 b에 포함되는 개수 파악
    int corners = 0;
    if (is_inside(a.x1, a.y1, b)) corners++;
    if (is_inside(a.x1, a.y2, b)) corners++;
    if (is_inside(a.x2, a.y1, b)) corners++;
    if (is_inside(a.x2, a.y2, b)) corners++;

    // 2. 겹치는 영역(Intersection)의 크기 구하기
    int inter_x1 = max(a.x1, b.x1);
    int inter_y1 = max(a.y1, b.y1);
    int inter_x2 = min(a.x2, b.x2);
    int inter_y2 = min(a.y2, b.y2);

    long long inter_w = max(0, inter_x2 - inter_x1);
    long long inter_h = max(0, inter_y2 - inter_y1);
    long long inter_area = inter_w * inter_h;

    // 3. 판정 로직
    if (corners < 2) {
        // 꼭짓점이 0개 혹은 1개만 가려지면, 남은 부분을 감싸는 최소 사각형은 원래 사각형과 같음
        cout << a.area() << endl;
    } else if (corners == 4) {
        // 네 꼭짓점이 모두 가려지면 남은 면적은 0
        cout << 0 << endl;
    } else {
        // 두 꼭짓점이 가려진 경우 (한쪽 면이 완전히 잘려나감)
        // 원래 면적에서 겹친 면적을 빼면 남은 영역을 감싸는 최소 사각형의 넓이가 됨
        cout << a.area() - inter_area << endl;
    }

    return 0;
}