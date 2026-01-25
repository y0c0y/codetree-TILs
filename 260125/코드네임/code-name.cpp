#include <bits/stdc++.h>

#define MAX_N 5

using namespace std;

char codename[MAX_N];
int score[MAX_N];


bool compare(tuple<char, int> a, tuple<char, int> b)
{
    char code_a, code_b;
    int score_a, score_b;

    tie(code_a, score_a) = a;
    tie(code_b, score_b) = b;

    return score_a < score_b;
}

int main() {


    tuple<char, int> agent[MAX_N];

    for (int i = 0; i < MAX_N; i++) {
        cin >> codename[i] >> score[i];

        agent[i] = make_tuple(codename[i], score[i]);
    }


    sort(agent, agent + MAX_N, compare);

    tuple<char, int> loser = agent[0];

    char loser_code;
    int loser_score;

    tie(loser_code, loser_score) = loser;



    cout << loser_code <<' ' << loser_score;


    return 0;
}
