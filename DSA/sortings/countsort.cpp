#include<iostream>
using namespace std;

void countsort(int arr[], int n){
    
    //finding the maximum element
    int k = arr[0];
    for (int i = 0; i < n; i++)
    {
        k = max(k, arr[i]);
    }

    //creating a count array which contains the count of individual nums present in arr
    int count[k+2] ={0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    //adding the prev and current element in array simultaneously
    for (int i = 1; i <=k; i++)
    {
        count[i] +=count[i-1];
    }
    
    //creating the output array to place the sorted array
    int output[n];
    for (int i = n-1; i >=0; i--)
    {
        output[--count[arr[i]]] =arr[i];
    }
    
    //coping the sorted (output) array  to the given array ->arr
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
    

    
}


int main(){
    int arr[] = {1,2,6,4,3,7,8,2,3,1,1,7,5};
    int n = sizeof(arr)/sizeof(int);
    cout<<"sorted array using count sorting: ";
    countsort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}