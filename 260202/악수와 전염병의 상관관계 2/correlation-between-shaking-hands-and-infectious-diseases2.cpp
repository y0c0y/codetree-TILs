#include <bits/stdc++.h>

using namespace std;

int N, K, P, T;
int t[250];
int x[250];
int y[250];

int main() {
    cin >> N >> K >> P >> T;

    vector<pair<int,pair<int,int>>> infos;
    pair<int,pair<int,int>> tmp;
    pair<int,int> ds;


    int developers[N+1] = {};
    fill_n(developers,N+1, -1); // -1 : 미감염자, 0: 감염되었지만 전파 X, 1 > : 전파 횟수 카운트

    for (int i = 0; i < T; i++) {
        cin >> t[i] >> x[i] >> y[i];

        ds = make_pair(x[i], y[i]);
        tmp = make_pair(t[i], ds);
        infos.push_back(tmp);
    }

    sort(infos.begin(), infos.end());

    developers[P]++;

    for(auto info : infos)
    {
        ds = info.second;

        if((developers[ds.first] == -1 || developers[ds.first] >= K) && (developers[ds.second] == -1 || developers[ds.second] >= K)) continue;
        else
        {
            developers[ds.first]++;
            developers[ds.second]++;
        }
    }

    for(int i = 1; i <= N; i++)
    {
        if(developers[i] >= 0) cout << 1;
        else cout << 0;
    }

    // Please write your code here.

    return 0;
}