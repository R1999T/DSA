// merge sorting

#include <iostream>

using namespace std;

// void mergeArray(int arr[], int lb, int ub, int mid)
// {

//     int n1 = mid - lb + 1;
//     int n2 = ub - mid;

//     int arr1[n1];
//     int arr2[n2];

//     // filling out abive array
//     for (int i = 0; i < n1; i++)
//     {
//         arr1[i] = arr[lb + i];
//     }

//     for (int i = 0; i < n2; i++)
//     {
//         arr2[i] = arr[mid + 1 + i];
//     }

//     // merge logic starts

//     int i = 0;
//     int j = 0;
//     int k = lb;

//     while (i < n1 && j < n2)
//     {
//         if (arr1[i] > arr2[j])
//         {
//             arr[k++] = arr2[j++];
//         }
//         else
//         {
//             arr[k++] = arr[i++];
//         }
//     }
//     while (i < n1)
//     {
//         arr[k++] = arr[i++];
//     }
//     while (j < n2)
//     {
//         arr[k++] = arr[j++];
//     }
// }

// void mergeSort(int arr[], int lb, int ub)
// {
//     if (lb < ub)
//     {
//         int mid = (lb + ub) / 2;
//         mergeSort(arr, lb, mid);
//         mergeSort(arr, mid + 1, ub);
//         mergeArray(arr, lb, ub, mid);
//     }

//     for (int i = 0; i <=ub; i++)
//     {
//         cout<<arr[i];
//     }
    
// }
void mergeArray(int *arr, int lb, int mid, int ub)
{

    int n1 = mid - lb + 1;
    int n2 = ub - mid;

    int a[n1];
    int b[n2];

    // filling out abive array
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[lb + i];
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    // merge logic starts

    int i = 0;
    int j = 0;
    int k = lb;

    while (i < n1 && j < n2)
    {
        if (a[i]< b[j])
        {
            arr[k++] = a[i++];
        }
        else
        {
            arr[k++] = b[j++];
        }
    }
    while (i < n1)
    {
        arr[k++] = a[i++];
    }
    while (j < n2)
    {
        arr[k++] = b[j++];
    }
}

void mergeSort(int *arr, int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        mergeSort(arr, lb, mid);
        mergeSort(arr, mid + 1, ub);
        mergeArray(arr, lb, mid,ub);
    }
    
}


int main()
{
    int a;

    cout << "enter no of elements for  array: ";
    cin >> a;
    int arr[a];
    cout << "enter the elements in the  array: ";
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    int upperbound = a-1;

    mergeSort(arr, 0, upperbound);
    
    for (int i = 0; i < a; i++)
    {
        cout<<arr[i]<< " ";
    }
    

    return 0;
}