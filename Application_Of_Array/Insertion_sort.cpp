/*
Insertion = Insert kore.
akta elelment k key te store kore, then left ar gula k key porjonto 1ta kore shift kore.
then key k right position a boshay.

for(1 to size-1){------------2nd element theke start korbo cz 1st ar ta sorted dhore nei.
    int key = arr[i];--------2nd ta k initially key te set korbo.
    int j = i-1;------------j ta key ar ag theke shuru hoye -- hoye 0 porjonto jabe.
    while(arr[j]>key && arr[j]>=0){--jotokkhon key theke left ar value boro & j = 0 porjonto cholbe.
        arr[j+1] = arr[j];----akta akta kore right a shift korbe..
        j--;
    }
    arr[j+1] = key; last a jei j theke key ta boro hobe tar porer ghore key ta place hobe.
}

Enter the size of array : 6
5 2 7 3 10 4
The Array Before sorted : 5 2 7 3 10 4 

Key = 2  i = 1
5 5 7 3 10 4    | i= 1 ,key = 2  , j = i-1 = 0 (arr[j] = 5)
2 5 7 3 10 4    | key the arr[j] boro tai while loop ta 0 porjonto cholbe.
                | arr[j+1]  =arr[j] mane 1 position a 0 position ar ta place hobe, 5 5 7 3 10 4 hobe
Key = 7  i = 2  | arr[j+1] = key , j+1 position a boshbe,cz j = 0 then j-- hoya j = -1 hoye gece.tai arr[-1+1] = arr[0]
2 5 7 3 10 4

Key = 3  i = 3 | i= 3 ,key = 3  , j = i-1 = 2 (arr[j] = 7)
2 5 7 7 10 4   | key the arr[j] boro tai while loop ta 0 porjonto cholbe.
2 5 5 7 10 4   | arr[j+1]  = arr[j] mane 3 position a 2 position ar ta place hobe, 2 5 7 7 10 4 hobe
2 3 5 7 10 4   | arr[j+1] = key , j+1 position a boshbe, cz j = 1 then j-- hoya j = 0 hoye gece.tai arr[0+1] = arr[1]
               | arr[0] ,key theke boro na tai j ta 0 te boshe ace.
Key = 10  i = 4
2 3 5 7 10 4

Key = 4  i = 5
2 3 5 7 10 10
2 3 5 7 7 10
2 3 5 5 7 10
2 3 4 5 7 10

The Array Before sorted : 2 3 4 5 7 10

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

void bubble_sort(int arr[] , int size)
{
    for( int i = 1 ; i < size ; i++)
    {
        int key = arr[i];
        cout<<endl << "Key = "<<key<<"  i = "<<i<<endl;
        int j = i - 1;
        while(arr[j] > key && j>=0)
        {
            arr[j+1] = arr[j];
            printArray(arr, size);
            j--;
        }
        arr[j+1] = key;
        printArray(arr, size);
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
    cout<<endl;
    cout << "The Array Before sorted : ";
    printArray(arr, size);
}