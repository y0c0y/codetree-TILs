#include <iostream>
#include <string>

using namespace std;

string input_str;
string target_str;

int main() {
    cin >> input_str;
    cin >> target_str;

    int len_input = input_str.length();
    int len_target = target_str.length();

    // bool exits = false;
    bool isCorrect = true;
    int idx = 0;

    for(int i = 0; i < len_input - len_target +  1; i ++)
    {
        
        isCorrect = true;

        for(int j = 0; j < len_target ; j ++)
        {
            if(input_str[i + j] != target_str[j]) isCorrect = false;
        }

        if(isCorrect)
        {
            // idx = i;
            cout<< i;
            break;
        }
        
    }


    // Please write your code here.

    return 0;
}
