/*
Bubble = budbud(boro ta uporer dike jabe)
protibar 2 ta value compare hobe.left ar ta theke right ar ta boro hole swap hobe.

for( i= 0 to n-1){  ------------- Iteration
    for(j = 0 to n-2){ ---------- value compare ar jonno.(shes position ar jonno swap kora labe na tai n-2)
        if(arr[j] > arr[j+1])
        {
            swap;
        }
    }
}

*/

#include <bits/stdc++.h>
using namespace std;
//-----------------------------Print Array------------------------------
void printArray(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//-----------------------------Bubble sort------------------------------
void bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
          if(arr[j]>arr[j+1])
          {
            int temp = arr[j];
            arr[j]= arr[j+1];
            arr[j+1] = temp;
          }
        }
    }
}
int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "The Array Before sorted : ";
    printArray(arr, size);

    // -------------------Bubble sort implementation-----------------------
    bubble_sort(arr, size);

    cout << "The Array Before sorted : ";
    printArray(arr, size);
}