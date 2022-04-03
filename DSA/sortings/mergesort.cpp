#include<iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right){
    int n1 = mid -left+1;
    int n2 = right - mid;
    int a[n1];
    int b[n2];// temp arrays

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[left+i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid+1+i];
    }
    
    int i = 0;
    int j = 0;
    int k = left;
    while (i<n1 && j<n2)
    {
        if (a[i]<b[j])
        {
            arr[k++] = a[i++];
        }
        else
        {
            arr[k++] = b[j++];
        }
    }

    //for remainning elements
    while (i<n1)
    {
        arr[k++] = a[i++];
    }
    while (j<n2)
    {
        arr[k++] = b[j++];
    }    
}


void mergeSort(int arr[], int left, int right){

    if (left<right)
    {
        int mid = (left+right)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}

int mid(int left, int right){
    return (left+right)/2;
}

int main(){
    int arr[] = {1,6,5,3,2,6,2};
    int sizeofarr = sizeof(arr)/sizeof(int);
    mergeSort(arr,1,sizeofarr);
    for (int i = 0; i < sizeofarr; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;

}