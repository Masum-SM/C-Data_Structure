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

--------------------------------     BEFORE J = SIZE - I -1  ------------------------------------
OUTPUT:
Enter the size of array : 5
14 11 1 5 4
The Array Before sorted : 14 11 1 5 4 
Iteration NO : 0
11 14 1 5 4
11 1 14 5 4
11 1 5 14 4
11 1 5 4 14

Iteration NO : 1
1 11 5 4 14
1 5 11 4 14
1 5 4 11 14
-------------------Ata r dorkar nei,cz 11 & 14 ageei sort korechi
1 5 4 11 14

Iteration NO : 2
1 5 4 11 14
1 4 5 11 14
-------------------r dorkar nei cz 5 & 11 & 14 ager itaretion a e sorted.
1 4 5 11 14
1 4 5 11 14

Iteration NO : 3
1 4 5 11 14
------------------r dorkar nei 1 bar sorted hobe
1 4 5 11 14
1 4 5 11 14
1 4 5 11 14

Iteration NO : 4 
1 4 5 11 14  ------- 0 bar sorted hobe.
1 4 5 11 14
1 4 5 11 14
1 4 5 11 14

The Array Before sorted : 1 4 5 11 14

j = size - i -1; i = 3 hole j = 5 - 3 - 1 = 1

--------------------------------    AFTER J = SIZE - I -1   ------------------------------------
Enter the size of array : 5
14 11 1 5 4
The Array Before sorted : 14 11 1 5 4 
Iteration NO : 0
11 14 1 5 4
11 1 14 5 4
11 1 5 14 4
11 1 5 4 14
11 1 5 4 14

Iteration NO : 1
1 11 5 4 14
1 5 11 4 14
1 5 4 11 14
1 5 4 11 14

Iteration NO : 2
1 5 4 11 14
1 4 5 11 14
1 4 5 11 14

Iteration NO : 3
1 4 5 11 14
1 4 5 11 14

Iteration NO : 4
1 4 5 11 14

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

// void bubble_sort(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout<<"Iteration NO : "<<i<<endl;
//         for (int j = 0; j < size-1; j++)
//         {
//           if(arr[j]>arr[j+1])
//           {
//             int temp = arr[j];
//             arr[j]= arr[j+1];
//             arr[j+1] = temp;
//           }
//           printArray(arr, size);
//         }
//         cout<<endl;
//     }
// }

void bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"Iteration NO : "<<i<<endl;
        for (int j = 0; j < size-i; j++)
        {
          if(arr[j]>arr[j+1])
          {
            int temp = arr[j];
            arr[j]= arr[j+1];
            arr[j+1] = temp;
          }
          printArray(arr, size);
        }
        cout<<endl;
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