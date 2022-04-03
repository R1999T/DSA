//BUBBLE SORT
//in this type of sorting we will repeatedly swap two adjacent elements if they are in wrong order


#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

void BubbleSorting(int arr[], int size){
    int counter =1;
    int flag =1;
    int i=0;
    while (counter<size && flag==1)
    {
        flag =0;
        cout<<"pass: "<<i<<endl;
        for ( i = 0; i < size-counter; i++)
        {
            if (arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
            flag =1;
            
        }
        counter++;
    }
    cout<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
}
//issue 
//WE will not swap if previous swap is occured
//we can use flags 
// void bubblesort(int arr[], int size){
//     int swap =1;
//     for (int i = 0; i < size&&swap==1; i++)
//     {
//         swap =0;
//         for (int j = 0; j < size-i; i++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//                 int temp = arr[j];
//                 arr[j] =  arr[j+1];
//                 arr[j+1] = temp;
//                 swap =1;
//             }
//             cout<<
            
//         }
        
//     }

//     for (int i = 0; i < size; i++)
//     {
//         cout <<arr[i]<<" ";
//     }
    
    
// }


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

    BubbleSorting(arr,n);

    return 0;
}