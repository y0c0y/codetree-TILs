#include <iostream>
#include <string>
#include <list>

using namespace std;



int main() {
    int N;
    string command;
    int A;
    cin >> N;
    list<int> ll;

    for (int i = 0; i < N; i++) {
        cin >> command;
        if (command == "push_front")
        {        
            cin >> A;
            ll.push_front(A);   
        }
        if (command == "push_back") 
        {        
            cin >> A;
            ll.push_back(A);
        }
        if (command == "pop_front")
        {        
            cout << ll.front() << '\n';  
            ll.pop_front();

        }
        if (command == "pop_back") 
        {        
           cout << ll.back() << '\n';
           ll.pop_back();
        }
        if (command == "size")
        {        
            cout << ll.size() << '\n';
             
        }
        if (command == "empty") 
        {        
            A =ll.empty() ? 1 : 0;
            cout << A << '\n';
        }
        if (command == "front")
        {        
            cout << ll.front() << '\n';   
        }
        if (command == "back") 
        {        
            cout << ll.back() << '\n';
        }
    }

    // Please write your code here.

    return 0;
}
