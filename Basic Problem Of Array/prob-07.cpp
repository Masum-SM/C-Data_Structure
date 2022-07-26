/*
WAP that will take n positive integers into an array A. Now find all the integers that are divisible by 3 and replace them by -1 in array A. Finally show all elements of array A.
####
Sample input
5
1  2  3  4  5
Sample output
7 8 1 -1 2 -1 4 -1

####
Sample input
3
3 2 1

Sample output
-1 2 1


*/

#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int sz){
    for(int i = 0 ; i < sz ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
    for(int i = 0; i < size ; i++){
        if(arr[i] % 3 == 0){
            arr[i] = -1;
        }
    }
    cout<<"After replacing The Array is : ";
    printArray(arr,size);

}