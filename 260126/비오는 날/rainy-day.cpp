#include <bits/stdc++.h>

using namespace std;

int n;
string date_str;
string day_str;
string weather_str;

bool compare(tuple<string,string,string> a, tuple<string,string,string> b)
{

    string date_a, day_a, weather_a;
    string date_b, day_b, weather_b;

    tie(date_a, day_a, weather_a) = a;
    tie(date_b, day_b, weather_b) = b;

    return a < b;

}

int main() {
    cin >> n;
    vector<tuple<string,string,string>> arr;

    for (int i = 0; i < n; i++) {
        cin >> date_str >> day_str >> weather_str;
        tuple<string,string,string> tmp = make_tuple(date_str, day_str, weather_str);

        arr.push_back(tmp);
    }

    sort(arr.begin(), arr.end(), compare);

    for(auto i : arr)
    {
        tie(date_str, day_str, weather_str) = i;

        if(weather_str == "Rain")
        {
            cout << date_str << ' ' << day_str << ' '<< weather_str << '\n';
            break;
        }
    }


    // Please write your code here.

    return 0;
}