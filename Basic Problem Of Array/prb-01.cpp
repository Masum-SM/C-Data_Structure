/*
WAP that will take n integer numbers into an array, and then sum up all the integers in that array.

####
Sample input
5
1  2  3  4  5
Sample output
15

####
Sample input
6
2  8  3  9  0  1
Sample output
23


*/

#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int sz){
    for(int i = 0 ; i < sz ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int sum_of_Array(int arr[],int sz){
    int sum = 0;
    for(int i = 0 ; i <sz ; i++){
        sum += arr[i];
    }
    return sum;
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
    int sum = sum_of_Array(arr,size);
    cout<<"Sum of all elements of Array is : "<<sum;
}