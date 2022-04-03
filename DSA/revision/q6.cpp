//
/*
Y mode 100 =0 centuary
Y mode 4 = 0 leepyear
*/

#include<iostream>

using namespace std;


int main(){
    int year;
    cin>>year;

    if (year %100==0)
    {
        if (year%400==0)
        {
            cout<<"the year is leap";
        }
        else
        {
            cout<<"year is not leep";
        }
    }
    
    
}