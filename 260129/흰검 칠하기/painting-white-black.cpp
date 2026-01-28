#include <bits/stdc++.h>

using namespace std;

int n;
int x[1000];
char dir[1000];

int main() {
    cin >> n;

    map<int,tuple<int,int,char>> arr; // {idx,(white, black)}

    tuple<int,int,char> tmp;

    int idx = 0;
    int destination = 0;
    int offset = 0;

    int white, black, gray;
    char ch = '\0';

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];

        if(dir[i] == 'L')
        {
            destination = idx - x[i];
            for(; idx > destination; idx--)
            {
                // cout << idx << ':';
                if(arr.end() == arr.find(idx))
                {
                    tmp = make_tuple(1,0, 'W');
                    arr.insert(make_pair(idx, tmp));
                }
                else
                {
                    tie(white, black, ch) = arr[idx];
                    tmp = make_tuple(white + 1,black, 'W');
                    arr[idx] = tmp;
                }

                // tie(white, black, ch) = arr[idx];
                // cout << white << ' ' << black << ' '<< ( ch == 'W' ? "White" : "Black" ) << '\n';
            }

            idx++;
        } 
        else
        {
            destination = idx + x[i];
            for(; idx < destination; idx++)
            {
                // cout << idx << ':';
                if(arr.end() == arr.find(idx))
                {
                    tmp = make_tuple(0,1, 'B');
                    arr.insert(make_pair(idx, tmp));
                }
                else
                {
                    tie(white, black, ch) = arr[idx];
                    tmp = make_tuple(white,black+1, 'B');
                    arr[idx] = tmp;
                }

                // tie(white, black, ch) = arr[idx];
                // cout << white << ' ' << black << ' '<< ( ch == 'W' ? "White" : "Black" ) << '\n';
            }

            idx--;
        }

        // cout<< idx << '\n';
    }

    white = black = gray = 0;

    int tmp_white, tmp_black;
    char tmp_ch;

    for(auto result : arr)
    {

        // cout << result.first << ' ';
        tie(tmp_white, tmp_black,  tmp_ch) = result.second;
        // cout << tmp_white << ' ' << tmp_black << ' '<< ( tmp_ch == 'W' ? "White" : "Black" ) << '\n';

        if(tmp_white >= 2 && tmp_black >= 2) gray++;
        else if(tmp_ch == 'W') white++;
        else if(tmp_ch == 'B') black++;
    }

    cout << white << ' ' << black << ' ' << gray << '\n';

    // Please write your code here.

   

    return 0;
}