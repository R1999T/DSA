/*
Recursion: function calling itself
Every recursion has COMPULSORY "IF" CONDITION
otherwise it will become infinite

condition+recursive call


=>Types of recursion
1. Direct
same body same call
f1 call f1


2.Indirect

f1 call f2
f2 call f3
f3 call f1


3. How to trace recursion
every recursionis trace twice 
-forward track
-back track

1->2->3->4

1<-2<-3<-4
it happens always

4.
Advantage:
 Short logic(R and T)
 small code
 easy to write and understand

Disadvantage:
 Slow execution
 More memory is reqiured

NOTE: USING RECURSION IS A BAD PROGRAMMING PRACTICE
WAP: non recursive
WARP: Rec


//H.W.
//sum of digits
//power


//1
//1 2
//1 2 3
*/

#include<iostream>
using namespace std;

void display(int i, int limit){
    if(i>limit){
        return;
    }
    //cout<<i<<" forward track "<<endl;  //imidiately exex=cute
    display(i+1,limit);
    cout<<i<<" back track "<<endl;  //put them in stack and then call them
}

int count=1;
int main(){
    //1
    // if (count<=5)
    // {
    //     cout<<count<<" ";
    //     count++;
    //     main();

    // }

    //2
    display(1,5);


    return 0;
}