//write a recursive program to calculate factorial of N:
//backtrACK


#include<iostream>
using namespace std;

int factorial(int n){
    int ans;
    if (n==0)       //t
    {
        return 1;
    }
    ans= factorial(n-1);      
    return ans*n;       //or return n*factorial(n-1);

           
    
}

int main(){
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<"factorial of "<<n<<" is "<<ans;

    return 0;
}