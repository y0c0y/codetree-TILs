#include <bits/stdc++.h>

using namespace std;

int N, C, G, H;
int Ta, Tb;

class Machine
{
    int Ta;
    int Tb;

public:

    Machine(){}

    Machine(int a, int b)
    {
        this->Ta = a;
        this->Tb = b;
    }

    int GetTa() const {return this->Ta;}
    int GetTb() const {return this->Tb;}
};

vector<Machine> machines;

int Works(const Machine& m, const int & temp)
{
    int Ta = m.GetTa();
    int Tb = m.GetTb();

    if(temp < Ta) return C;
    else if(temp >= Ta && temp <= Tb) return G;
    else return H;
}

int main() {
    cin >> N >> C >> G >> H;

    int minT = INT_MAX;
    int maxT = INT_MIN;

    for (int i = 0; i < N; i++) {
        cin >> Ta >> Tb;
        machines.push_back(Machine(Ta, Tb));

        minT = min(minT, Ta);
        maxT = max(maxT, Tb);
    }

    int total = 0;
    int result = INT_MIN;

    // cout << minT << ' ' << maxT <<'\n';

    int temp = 0;

    for(int i = minT - 1; i <= maxT + 1; i++)
    {
        total = 0;

        // cout << i <<'\n';

        for(int j = 0; j < N; j++)
        {
            temp = Works(machines[j], i);

            // cout << "temp : " << temp <<'\n';

            total += temp;
        }

        // cout << result << ' ' << total <<'\n';

        result = max(result, total);
    }

    cout << result;

    // Please write your code here.

    return 0;
}