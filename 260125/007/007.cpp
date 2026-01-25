#include <bits/stdc++.h>

using namespace std;

string secret_code;
char meeting_point;
int t;

class Secret
{
    string s;
    char m;
    int t;

public:
    Secret(string s, char m, int t)
    {
        this->s = s;
        this->m = m;
        this->t = t;
    }

    string GetSecretCode()
    {
        return this->s;
    }

    char GetMeetingPoint()
    {
        return this->m;
    }

    int GetTime()
    {
        return this->t;
    }
};

int main() {
    cin >> secret_code >> meeting_point >> t;

    Secret ss1 = Secret(secret_code, meeting_point, t);

    cout << "secret code : " << ss1.GetSecretCode() << '\n';
    cout << "meeting point : " << ss1.GetMeetingPoint() << '\n';
    cout << "time : " << ss1.GetTime() << '\n';

    // Please write your code here.

    return 0;
}