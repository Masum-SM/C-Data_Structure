#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of an array : ";
    cin >> size;
    int arr[size + 1];
    cout << "Enter the values of array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Array Before sort : ";
    printArray(arr, size);

    //---------------STEP 01 : FINDING MAX  -------------------------
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    //------------------ STEP 02 : INITIALIZATION OF "count" ARRAY---------------------
    int count[max + 1];
    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }


    // -----------------STEP 03 : FREQUENCY CALCULATION -------------------
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }

    // --------------------STEP 04 : CUMULATIVE SUM (PREFIX SUM) -----------------
    for (int i = 1; i <= max; i++)
    {
        count[i] = count[i] + count[i - 1];
    }


    //-------------------- STEP 05 : FINAL ARRAY (backward traversal of basic array-----------------
    int final_arr[size];
    for (int i = size - 1; i >= 0; i--)
    {
        count[arr[i]]--;
        int k = count[arr[i]];
        final_arr[k] = arr[i];
    }
    
    cout << endl;
    cout << "Array After sort : ";
    printArray(final_arr, size);

    return 0;
}