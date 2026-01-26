#include <bits/stdc++.h>

using namespace std;

int n;
string name[10];
int korean[10];
int english[10];
int math[10];


class Student
{
public:

    string name;
    int korean;
    int english;
    int math;

    Student(string n, int k, int e, int m)
    {
        this->name = n;
        this->korean = k;
        this->english = e;
        this->math = m;
        
    }

    Student(){}


};


bool cmp(const Student &a, const Student &b)
{
    return make_tuple(-a.korean, -a.english, -a.math) < make_tuple(-b.korean, -b.english, -b.math);
}

int main() {
    cin >> n;

    vector<Student> arr;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> korean[i];
        cin >> english[i];
        cin >> math[i];


        Student tmp = Student(name[i], korean[i], english[i], math[i]);

        arr.push_back(tmp);
    }

    sort(arr.begin(), arr.end(), cmp);

    // Please write your code here.

    for(auto s : arr)
    {
        cout << s.name << ' ' << s.korean << ' ' << s.english << ' ' << s.math <<'\n';
    }

    return 0;
}