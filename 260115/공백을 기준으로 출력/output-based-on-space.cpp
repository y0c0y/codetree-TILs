#include <iostream>

#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str[2];
    
    string result;

   
    for(int i = 0; i <2; i++ )
    {
         getline(cin, str[i]);
    }

    for(int i = 0; i <2; i++ )
    {
        for(int j = 0; j < str[i].length(); j++ )
        {
           if(str[i][j] != ' ')
           {
            result+= str[i][j];
           }
        }
    }

    cout << result;


    return 0;
}