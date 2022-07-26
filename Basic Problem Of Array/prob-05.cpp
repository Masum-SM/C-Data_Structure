/*
WAP that will take n integers into an array, and then search a number into that array. If found then print its index. If not found then print “NOT FOUND”.

####
Sample input
8
7 8 1 3 2 6 4 3
3

Sample output
FOUND at index position : 3
FOUND at index position : 7

####
Sample input
8
7 8 1 3 2 6 4 3
5

Sample output
NOT FOUND


*/

#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int sz){
    for(int i = 0 ; i < sz ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void search(int arr[],int sz){
    int value, flag = 0 , index[10];
    cout<<"Enter the value you want to search : ";
    cin>>value;
  
    for(int i = 0 ; i < sz ; i++){
        if(value == arr[i]){
            flag = 1;
              cout<<"FOUND at index position : "<<i<<endl;
        }

    }
    if(flag == 0){
        cout<<"NOT FOUND";
    }
}
int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    for(int i = 0; i < size ; i++){
        cin>>arr[i];
    }
    cout<<"The Array is : ";
    printArray(arr,size);
    search(arr,size);
}