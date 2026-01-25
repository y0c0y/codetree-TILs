#include <iostream>
#include <string>
#include <utility>


using namespace std;

string user2_id;
int user2_level;

int main() {
    cin >> user2_id >> user2_level;

    pair<string, int> user1  = make_pair("codetree", 10);
    pair<string, int> user2  = make_pair("codetree", 10);

    user2 = make_pair(user2_id, user2_level);

    cout << "user " << user1.first << " lv " << user1.second << '\n';
    cout << "user " << user2.first << " lv " << user2.second<< '\n';

    // Please write your code here.

    return 0;
}