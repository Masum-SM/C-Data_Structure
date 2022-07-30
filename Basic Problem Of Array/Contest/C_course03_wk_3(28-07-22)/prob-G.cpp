#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int arr[4];
    int i = 0;
    while(num>0){
        int digit = num % 10;
        arr[i] = digit;
        num = num/10;
        i++;
    }
    int flag = 0;
    for(int i = 0 ;i<3;i++){
        if(arr[0] == arr[2]){
            flag = 1;
        }

    }
    if(flag == 0){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }

    return 0;
}