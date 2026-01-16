#include <iostream>
using namespace std;

int main() {
    // Please write your code here.


    string str;
    char ch;

    cin >> str >> ch;

    int result = str.find(ch);

    if(result == string::npos) cout << "No";
    else cout << result;
    return 0;
}