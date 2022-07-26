/*
WAP that will take n integer numbers into an array, and then sum up all the integers in that array.

####
Sample input
8
7 8 1 5 2 6 4 3
6
1 3 6 0 9 2

Sample output
1 2 6 3

####
Sample input
3
1 2 3
2
4 5

Sample output
Empty set

*/

#include<bits/stdc++.h>
using namespace std;
void takeInput(int arr[],int size){
    for(int i = 0; i < size ; i++){
        cin>>arr[i];
    }
}
void printArray(int arr[],int sz){
    for(int i = 0 ; i < sz ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size1 ,size2;
    cout<<"Enter the size of 1st array : ";
    cin>>size1;
    int arr1[size1];
    for(int i = 0; i < size1 ; i++){
        cin>>arr1[i];
    }

    cout<<"The 1st Array is : ";
    printArray(arr1,size1);  

    cout<<"Enter the size of 2nd array : ";
    cin>>size2;
    int arr2[size2];
    for(int i = 0; i < size2 ; i++){
        cin>>arr2[i];
    }

    cout<<"The 2nd Array is : ";
    printArray(arr2,size2);
    int flag = 0;
    for(int i = 0 ; i<size1 ; i++){
        for(int j = 0 ; j<size2 ; j++){
            if(arr1[i] == arr2[j]){
                flag = 1;
                cout<<arr1[i]<<" ";
            }
        }
    }
    cout<<endl;
    if(flag == 0){
        cout<<"Empty set.";
    }

}