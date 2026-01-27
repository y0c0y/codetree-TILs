#include <bits/stdc++.h>

using namespace std;

int m1, d1, m2, d2;

int numOfDays[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

string weekStr[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    // Please write your code here.

    int total_m1 = 0;
    int total_m2 = 0;


    for(int i = 0; i < m1; i++)
    {
        total_m1 += numOfDays[i];
    }

    total_m1 += d1;


    for(int i = 0; i < m2; i++)
    {
        total_m2 += numOfDays[i];
    }

    total_m2 += d2;


    int tmp = total_m2 - total_m1;

    if(tmp < 0)
    {
        tmp = 7 - abs(tmp)%7;
    }
    else tmp = tmp % 7;

    cout<<weekStr[tmp];
    return 0;
}