#include <bits/stdc++.h>

using namespace std;

int m1, d1, m2, d2;

int numOfDays[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

string weekStr[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};

int main() {

    string A;
    cin >> m1 >> d1 >> m2 >> d2 >> A;

    // Please write your code here.

    int total_m1 = 0;
    int total_m2 = 0;

    int gap = 0;

    for(auto s : weekStr)
    {
        if(s == A) break;
        gap++;
    }

    for(int i = 0; i < m1; i++)
    {
        total_m1 += numOfDays[i];
    }

    total_m1 += d1 + gap;


    for(int i = 0; i < m2; i++)
    {
        total_m2 += numOfDays[i];
    }

    total_m2 += d2;

    int tmp = (total_m2 - total_m1) / 7;

    if(tmp > 0) tmp++;

    cout<<tmp;
    return 0;
}