#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int MaxOfArray(int arr[],int size){
  int max = arr[0],i;
  for (int i = 0; i < size; i++)
  {
      if (arr[i]>max)
      {
          max= arr[i];
      }
      
  }
  
}

int main(){
    
    int n, i;
    cout<<"enter size: ";
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int ans= MaxOfArray(arr,n);

    cout<< "max of array is: "<<ans;

    return 0;
}