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
    cout<< "Enter the size of an array : ";
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }
    cout<<"Given array is : ";
    printArray(arr,size);
    
    flag:
    int position;
    
    cout<< "Enter the position you want to delete the value : ";
    cin>>position;
    if(position < 0 || position > size-1){
        cout<< "Invalid position."<<endl;
        char c;
        cout<<"Do you want to proceed deletion (Y/N) : ";
        cin>>c;
        if(toupper(c) == 'Y'){
           goto flag;
        }
        else{
            return 0;
        }
        

    }
    else{
        for(int i = position+1 ; i < size ; i++){
            arr[i-1] = arr[i];
        }
        size--;
    }
    cout<<"After Deletion the Array is : ";
    printArray(arr,size);


}