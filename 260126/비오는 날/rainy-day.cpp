#include <bits/stdc++.h>

using namespace std;

int n;
string date_str;
string day_str;
string weather_str;

enum Week
{
    Sun,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat
}

Week WeekStrToInt(string d)
{

    if(d == "Sun") return Week.Sun;
    if(d == "Sun") return Week.Sun;
    if(d == "Sun") return Week.Sun;

}

bool compare(tuple<stirng,string,string> a, tuple<stirng,string,string> b)
{

    string date_a, day_a, weather_a;
    string date_b, day_b, weather_b;

    tie(date_a, day_a, weather_a) = a;
    tie(date_b, day_b, weather_b) = b;

    if(date_a != date_b) return a < b;
    if()

}

int main() {
    cin >> n;
    vector<tuple<stirng,string,string>> arr;

    for (int i = 0; i < n; i++) {
        cin >> date_str >> day_str >> weather_str;
        tuple<stirng,string,string> tmp = make_tuple(date_str, day_str, weather_str);

        arr.push_back(tmp);
    }

    sort(arr.begin(), arr.end(), compare);


    // Please write your code here.

    return 0;
}