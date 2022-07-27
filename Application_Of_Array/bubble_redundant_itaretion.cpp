/*
Bubble = budbud(boro ta uporer dike jabe)
protibar 2 ta value compare hobe.left ar ta theke right ar ta boro hole swap hobe.

for( i= 0 to n-1){  ------------- Iteration
flag = 0
    for(j = 0 to n-2){ ---------- value compare ar jonno.(shes position ar jonno swap kora labe na tai n-2)
        if(arr[j] > arr[j+1])
        {
            swap;
            flag = 1;
        }
    }
    if(flag == 0){
        break;
    }
}

---------------------------------------------------OUTPUT WITHOUT FLAG-------------------------------

Enter the size of array : 7
14 11 2 3 4 5 6
The Array Before sorted : 14 11 2 3 4 5 6
Iteration NO : 0
11 14 2 3 4 5 6
11 2 14 3 4 5 6
11 2 3 14 4 5 6
11 2 3 4 14 5 6
11 2 3 4 5 14 6
11 2 3 4 5 6 14
11 2 3 4 5 6 14
Iteration NO : 1
2 11 3 4 5 6 14
2 3 11 4 5 6 14
2 3 4 11 5 6 14
2 3 4 5 11 6 14
2 3 4 5 6 11 14
2 3 4 5 6 11 14
Iteration NO : 2
2 3 4 5 6 11 14
2 3 4 5 6 11 14
2 3 4 5 6 11 14
2 3 4 5 6 11 14
2 3 4 5 6 11 14
Iteration NO : 3
2 3 4 5 6 11 14
2 3 4 5 6 11 14
2 3 4 5 6 11 14
2 3 4 5 6 11 14
Iteration NO : 4
2 3 4 5 6 11 14
2 3 4 5 6 11 14
2 3 4 5 6 11 14
Iteration NO : 5
2 3 4 5 6 11 14
2 3 4 5 6 11 14
Iteration NO : 6
2 3 4 5 6 11 14
The Array Before sorted : 2 3 4 5 6 11 14

---------------------------------------------------OUTPUT WITH FLAG-------------------------------

Enter the size of array : 7
14 11 2 3 4 5 6
The Array Before sorted : 14 11 2 3 4 5 6 
Iteration NO : 0
11 14 2 3 4 5 6
11 2 14 3 4 5 6
11 2 3 14 4 5 6
11 2 3 4 14 5 6
11 2 3 4 5 14 6
11 2 3 4 5 6 14
11 2 3 4 5 6 14
Iteration NO : 1
2 11 3 4 5 6 14
2 3 11 4 5 6 14
2 3 4 11 5 6 14
2 3 4 5 11 6 14
2 3 4 5 6 11 14
2 3 4 5 6 11 14
Iteration NO : 2
2 3 4 5 6 11 14
2 3 4 5 6 11 14
2 3 4 5 6 11 14
2 3 4 5 6 11 14
2 3 4 5 6 11 14
The Array Before sorted : 2 3 4 5 6 11 14

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
        int flag = 0;
        cout << "Iteration NO : " << i << endl;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
            printArray(arr, size);
        }
        if (flag == 0)
        {
            break; // itaretion REDUCTION.
            cout << endl;
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