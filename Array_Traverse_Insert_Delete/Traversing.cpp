#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int sz)
{
    for(int i = 0; i< sz; i++){
        cout<<arr[i] << " ";
    }
}


int main()
{
   int arr[30];
   int sizeOf_arr;
   cout<<"Enter the size of an array : ";
   cin>>sizeOf_arr;
   for (int i = 0; i < sizeOf_arr; i++)
   {
    /* code */
    cin>>arr[i];

   }
   printArray(arr,sizeOf_arr);
   

    return 0;
}