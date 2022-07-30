#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
          if(arr[j]>arr[j+1])
          {
            int temp = arr[j];
            arr[j]= arr[j+1];
            arr[j+1] = temp;
          }
        }
    }
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int num;
        cin>>num;
        int arr[num+1];

        for(int i = 0 ; i < num ; i++)
        {
            cin>>arr[i];
        }
        bubble_sort(arr,num);

        int count = 0;
        for(int i = 1 ; i < num ; i++){
            int key = arr[0];
            if(key < arr[i])
            {
            count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}