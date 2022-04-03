#include<iostream>
using namespace std;


void reverse(int arr[], int i, int n){
    if (i==n)
    {
        return;
    }
    reverse(arr, i+1,n);
    cout<<arr[i]<<" ";
}

//static is a storage class
//1. auto
//2. static
//3. stern


int main(){
    int a[5]= {1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    reverse(a,2,n);

    return 0;
}