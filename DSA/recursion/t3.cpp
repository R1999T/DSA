#include<iostream>
using namespace std;


int sumn(int n){
    int ans;
    if (n==0)
    {
        return 0;
    }
    ans = sumn(n-1);
    ans = ans + n;
    return ans;
    
}

int sumOfDigits(int n){
    int ans;
    if (n<10)    //or 0 return 0
    {
        return n;
    }
    
    ans = n%10 +sumOfDigits(n/10);
    return ans;
}

int powerOfN(int n, int power){
    int ans;
    if (power == 0)
    {
        return 1;
    }
    return n*powerOfN(n,power-1);
    
}

//write a recursive program to multiply two nos
int multiply(int a, int b){
    if (a==0 || b ==0)
    {
        return 0;
    }
    return a+ multiply(a,b-1);
    
}
//pattern using recursion
// void col(int j, int i){
//     if (j>i)
//     {
//         return;
//     }
//     cout<<
    
// }

//recursive WARP to print nth term of fibbonacci series
int fibonacci(int n){
    if (n==0 || n==1)
    {
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
    
}
    
    
// }

//

int main(){
    int n;
    cin>>n;

    int ans = sumOfDigits(n);

    int answertwo = powerOfN(n,3);

    cout<<"Sum of digits  "<<n<<" is "<<ans<<endl;

    cout<<"cube of "<<n<<" is "<<answertwo<<endl;

    cout<<fibonacci(n);

    return 0;
}