//linear search
#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int size, int element){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element)
        {
            return true;
        }
        
    }
    return false;
}
int Linearsearch(int arr[],int size, int element){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element)
        {
            return i;
        }
        
    }
    return -1;
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
    bool ans = Linearsearch(arr,n,4);
    cout<<ans;
    cout<<n;
    // if (ans =! 0)
    // {
    //     cout<<"element found st location: "<<ans;
    // }
    // else{
    //     cout<<"element not found";
    // }

    return 0;
}