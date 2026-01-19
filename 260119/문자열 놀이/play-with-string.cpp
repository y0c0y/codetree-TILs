#include <bits/stdc++.h>
using namespace std;

vector<string> split(string s, string d) {
    vector<string> res;
    size_t start = 0, end;

    while ((end = s.find(d, start)) != string::npos) {
        res.push_back(s.substr(start, end - start));
        start = end + d.length();
    }
    res.push_back(s.substr(start)); // 마지막 조각
    return res;
}

int main() {
    // Please write your code here.
    

    string s;
    int q;
    cin >> s >> q;
    cin.ignore();

    int len = s.length();

    vector<string> vector_q;
    string ques;

    for(int i = 0; i < q; i++)
    {
        getline(cin, ques);
        vector_q = split(ques, " ");

        if(vector_q[0] == "1")
        {
            int a = stoi(vector_q[1]) - 1;
            int b = stoi(vector_q[2]) - 1;

            swap(s[a], s[b]);
            
        }
        else
        {
            for(int j = 0; j < len; j++)
            {
                if(s[j] == vector_q[1][0])s[j] = vector_q[2][0];
            }
        }

        cout<<s<<"\n";

              
    }


    return 0;
}