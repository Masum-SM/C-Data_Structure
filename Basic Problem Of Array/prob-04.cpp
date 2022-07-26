
/*
WAP that will take n integer numbers into an array, and then find the maximum -minimum among them with its index position

####
Sample input
5
1  2  3  4  5
Sample output
Max: 5, Index: 4
Min: 1, Index: 0

####
Sample input
6
2  8  3  9  0  1
Sample output
Max: 9, Index: 3
Min: 0, Index: 4


*/

#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int sz){
    for(int i = 0 ; i < sz ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void findMax(int arr[],int size){
    int max = arr[0], index;
    for(int i = 0 ; i < size ; i++){
        if(max<=arr[i]){
            max = arr[i];
            index = i;
        }
        
    }
    cout<<"Max : "<<max<<", Index : "<<index<<endl;
}
void findMin(int arr[],int size){
    int min = arr[0], index;
    for(int i = 0 ; i < size ; i++){
        if(min>=arr[i]){
            min = arr[i];
            index = i;
        }
        
    }
    cout<<"Min : "<<min<<", Index : "<<index<<endl;
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
    findMax(arr,size);
    findMin(arr,size);
}