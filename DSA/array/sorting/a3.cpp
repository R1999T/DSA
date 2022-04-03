//insertion sorting
//inseting element to it s correct position
//used when array is nearly sorted


//inserting element to its correct position

#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){
    
    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i-1;
        while (arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]= current;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<endl;
    int arr[n];
    cout<<"Enter the elements in array: ";

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<endl;

    cout<<"array you entered: ";

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    insertionSort(arr,n);
    return 0;
}