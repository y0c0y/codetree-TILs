#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    vector<int> a;
    int tmp;

    cin >> n;
    for(int i = 0; i<n;i++)
    {
        cin >> tmp;
        a.push_back(tmp);
    }
    
    while(a.size() > 0)
    {
        tmp = a.back();
        if(tmp %2==0) cout << tmp << " ";
        a.pop_back();
        
    }





    return 0;
}