#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int a,b,c,d;
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b >> c >> d;
        int tmp = a+b+c+d;
        if(tmp>=240)
        {
            cout << "pass\n";
            cnt += 1;
        }
        else cout << "fail\n";
        
    }

    cout << cnt;




    return 0;
}