#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[] , int size){
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;
    int arr[40];
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }
    cout<<"Given array is : ";
    printArray(arr,size);
    int position , value;
    cout<<"Enter the position of Inserstion : ";
    cin>>position;
    cout<<"Enter the value for Insertion : ";
    cin>>value;

    if(position < 0 || position > size){
        cout<<"Invalid Index.";

    }
    else{
        // // one way for insertion that needed more time used for sorted array.
        // for(int i = size - 1 ; i >= position ; i--){
        //     arr[i+1] = arr[i];
        // }
        // arr[position] = value;

        // Another way for insertion that needed comparatively less time used for unsorted array..
        arr[size]  = arr[position];
        arr[position] = value;

    }
    cout<<"After Insertion the array is : ";
    printArray(arr,size+1);


    return 0;
}