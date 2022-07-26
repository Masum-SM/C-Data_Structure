/*
Limitation of Binary Search:
1.The array need to be sorted.
2.It is not applicable on duplicate element on array.

Facality :
1.Time complexity is less : log(n)

*/

#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
}

int BinSearch(int arr[], int value,int lb,int ub)
{
    if (lb <= ub)
    {
        int mid = (lb + ub) / 2;
        if (value == arr[mid])
            return mid;
        else if (value > arr[mid])
        {
            BinSearch(arr,value,mid+1,ub);
            
        }
        else{
            BinSearch(arr,value,lb,mid-1);
        }
    }
    else return -1;
}


int main()
{
    int size;
    cout << "Enter the size of an array : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The Array is : ";
    printArray(arr, size);

    int value;
    cout << "Enter the value you want to search : ";
    cin >> value;

    int indexNum;
    indexNum = BinSearch(arr, value, 0 , size-1);
    

    if(indexNum != -1){
       cout<< "Index No : "<<indexNum<<"  Position No : "<<indexNum+1<<endl;
    }
    else{
        cout<< "Not found."<<endl;
    }


    return 0;
}