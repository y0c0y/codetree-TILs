#include <bits/stdc++.h>

using namespace std;

int N, B;
int P[1000];
int S[1000];

bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
    int fa,sa, fb, sb;

    tie(fa, sa) = a;
    tie(fb, sb) = b;

    if(fa + sa != fb + sb) return fa + sa < fb + sb;
    else
    {
        if(sa != sb) return sa < sb;
        else return fa <= fb;
    }
    
}


int main() {
    cin >> N >> B;

    int maxVal = INT_MIN;

    vector<pair<int,int>> students;
    pair<int,int> tmp;

    for (int i = 0; i < N; i++) {
        cin >> P[i] >> S[i];

        tmp = make_pair(P[i], S[i]);
        students.push_back(tmp);
    }

    sort(students.begin(), students.end());

    int total = 0;
    int cnt = 0;

    int price = 0;
    int ship = 0;

    // for (int i = 0; i < N; i++) {
    
    //     tie(price, ship) = students[i];

    //     cout << price << ' ' << ship << '\n';
        
    // }

    for (int i = 0; i < N; i++) {
        total = 0;
        cnt = 0;

        tie(price, ship) = students[i];

        total += price/2 + ship;

        if(total <= B)
        {
            cnt++;

            for (int j = 0; j < N; j++) {
                if(i == j) continue;

                tie(price, ship) = students[j];
                total += price + ship;

                if(total <= B) cnt++;
                else break;
            }
        }

        maxVal = max(maxVal, cnt);
        
    }

    cout <<  maxVal;


   

    // Please write your code here.

    return 0;
}