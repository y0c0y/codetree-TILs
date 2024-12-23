#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    vector<int> arr;

    cin >> n;

    for(auto i =0; i<n;i++)
    {
        string com;
        cin >> com;
        
        if(com == "push_back")
        {
            int tmp;
            cin >> tmp; 
            arr.push_back(tmp);
        }
        if(com == "pop_back")
        {
            arr.pop_back();
        }
        if(com == "get")
        {
            int tmp;
            cin >> tmp; 
            cout<< arr[tmp - 1] << "\n";
        }
        if(com == "size")
        {
            cout<< arr.size() << "\n";
        }
    }


    return 0;
}