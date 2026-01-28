#include <bits/stdc++.h>

using namespace std;

int n;
int x[1000];
char dir[1000];

int main() {
    cin >> n;

    map<int,tuple<int,int,bool>> arr; // {idx,(white, black)}

    tuple<int,int,bool> tmp;

    int idx = 0;
    int destination = 0;
    int offset = 0;

    int white, black, gray;
    bool isWhite = false;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];

        if(dir[i] == 'L')
        {
            offset = -1;
        } 
        else
        {
            offset = 1;
        }

        destination = idx + x[i] * offset;

        for(int j = idx; j != destination; j += offset)
        {
            if(arr.end() == arr.find(j))
            {
                white = black = 0;
                tmp = offset == 1 ? make_tuple(white,black+1, false) : make_tuple(white + 1,black, true);
                arr.insert(make_pair(j, tmp));
            }
            else
            {
                tie(white, black, isWhite) = arr[j];
                tmp = offset == 1 ? make_tuple(white,black+1, !isWhite) : make_tuple(white + 1,black, !isWhite);
                arr[j] = tmp;
            }
        }

        idx = destination - offset;
    }

    white = black = gray = 0;

    int tmp_white, tmp_black;
    bool tmp_flag;

    for(auto result : arr)
    {
        tie(tmp_white, tmp_black, tmp_flag) = result.second;
        if(tmp_white >= 2 &&  tmp_black >= 2) gray++;
        else if(tmp_white >  tmp_black) white++;
        else if(tmp_white <  tmp_black) black++;
        else//tmp_white ==  tmp_black
        {
            if(tmp_flag) white++;
            else black++;
        }
        
    }

    cout << white << ' ' << black << ' ' << gray << '\n';

    // Please write your code here.

   

    return 0;
}