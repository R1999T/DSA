#include<iostream>
using namespace std;


void mergeArray(int *arr1,int *arr2, int size1, int size2, int *result){
    int i=0;
    int j =0;
    int k = 0;

    while (i < size1 && j< size2)
    {
        if (arr1[i]> arr2[j])
        {
            result[k++] = arr2[j++];
        }
        else
        {
            result[k++] = arr1[i++];
        }
    }

    while (i<size1)
    {
        result[k++] = arr1[i++];
    }
    while (j<size2)
    {
        result[k++] = arr2[j++];
    }
    
    int newSize = size1+size2;
    for (int m = 0; m < newSize; m++)
    {
        cout<<result[m]<<" ";
    }
    
    
}




int main(){

    int a,b;

    cout<<"enter no of elements for first sorted array: ";
    cin>>a;
    int arr1[a];
    cout<<"enter the elements in the first array: ";
    for (int i = 0; i < a; i++)
    {
        cin>>arr1[i];
    }
    cout<<endl;


    cout<<"enter no of elements for second sorted array: ";
    cin>>b;
    int arr2[b];
    cout<<"enter the elements in the second array: ";
    for (int i = 0; i < b; i++)
    {
        cin>>arr2[i];
    }
    cout<<endl;

    cout<<"size of new array is : "<<a+b<<endl;
    cout<<endl;

    int newArr[a+b];
    cout<<"new array is: "; 

    mergeArray(arr1,arr2,a,b,newArr);



    return 0;
}