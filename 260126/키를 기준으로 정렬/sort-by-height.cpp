#include <bits/stdc++.h>

using namespace std;

int n;
string name;
int height;
int weight;

class Student{

    public:

    string name;
    int height;
    int weight;

    Student(string n, int h, int w)
    {
        this->name = n;
        this->height = h;
        this->weight = w;
    }

    Student(){}
};


bool cmp (const Student & a, const Student & b)
{
    return a.height < b.height;
}

int main() {

    vector<Student> arr;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> height;
        cin >> weight;

        Student tmp = Student(name, height, weight);

        arr.push_back(tmp);
    }

    sort(arr.begin(), arr.end(), cmp);

    for(auto i : arr)
    {
        cout << i.name << ' ' << i.height << ' ' << i.weight << '\n';
    }

    // Please write your code here.

    return 0;
}