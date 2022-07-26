/*
WAP that will take n integer numbers into an array, and then reverse all the integers within that array. Finally, print them all from 0 index to the last valid index.
####
Sample input
5
1  2  3  4  5
Sample output
5  4  3  2  1

####
Sample input
6
2  8  3  9  0  1
Sample output
1  0  9  3  8  2


*/

#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int sz){
    for(int i = 0 ; i < sz ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverseArray(int arr[],int size){
     for(int i = 0 , j = size-1; i<j ; i++ , j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
     }
}
int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size] , copied_arr[size];
    for(int i = 0; i < size ; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < size ; i++){
        copied_arr[i]=arr[i];
    }
    cout<<"The Array before reverse : ";
    printArray(copied_arr,size);
    reverseArray(arr,size);
    cout<<"The Array After reverse : ";
    printArray(arr,size);

}