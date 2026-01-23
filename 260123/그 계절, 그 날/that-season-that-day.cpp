#include <bits/stdc++.h>

using namespace std;

int Y, M, D;

bool IsLeapYear()
{
    bool flag = false;

    if(Y % 4 == 0)
    {
        flag= true;

        if(Y % 100 == 0)
        {
             flag = false;

            if(Y % 400 == 0)  flag = true;
        }
    }

    return flag;
}

void PrintSeason()
{
    switch(M)
    {
        case 3:
        case 4:
        case 5:
            cout << "Spring";
            break;

        case 6:
        case 7:
        case 8:
        cout << "Summer";
            break;
        
        case 9:
        case 10:
        case 11:
        cout << "Fall";

            break;
        
        case 12:
        case 1:
        case 2:
        cout << "Winter";
            break;

        default:
        cout << "-1";
            break;
    }
}

bool IsRealDay(bool isLeapYear)
{
    int dayLimit = 0;

    switch(M)
    {
        case 4:
        case 6:
        case 9:
        case 11:
            dayLimit = 30;
            break;

        case 2:
            if(isLeapYear) dayLimit =  29;
            else dayLimit = 28;
            break;

        default: 
            dayLimit = 31;
            break;
    }

    return D <= dayLimit;
}

int main() {
    cin >> Y >> M >> D;

    // Please write your code here.

    

    int dayLimit = 0;
    bool leap = false;

    if(M == 2) leap = IsLeapYear();
    
    if(!IsRealDay(leap)) M = -1;

    PrintSeason();



    return 0;
}