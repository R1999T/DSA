//element in unsorted array

#include<iostream>

using namespace std;

void insertion(int arr[], int n,int item, int position){
    if (position<0 || position>n)
    {
        return;
    }

    for (int i = n-1 ;i >= position; i--)
    {
        arr[i+1]= arr[i];
    }
    arr[position]= item;
    
    n++;
}

int main(){
    int arr[10],n, pos, item;
    cout<<"enter the numbers: ";
    cin>>n;
    cout<<endl;
    //input
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   
    cout<<"enter the element to insert: ";
    cin>>item;
    cout<<"enter the position to insert: ";
    cin>>pos;
    

    insertion(arr,n,item,pos);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    


    return 0;
}