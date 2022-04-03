//selection sorting


#include<iostream>
using namespace std;


void selectionSorting(int arr[], int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
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

    selectionSorting(arr,n);
    return 0;
}