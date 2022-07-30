#include<bits/stdc++.h>
using namespace std;
int maximum(int a,int b)
{
    if(a>b)return a;
    else return b;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int num,count=0;
        cin>>num;
        int arr[num+1];
        for(int i = 0 ; i < num ; i++)
        {
            cin>>arr[i];
        }

        for(int i = 0 ; i < num ; i++){
            int c = 0;
            for(int j = 0 ; j < num ; j++)
            {
                if(arr[i] == arr[j])
                {
                    c++;
                }
                count = maximum(count,c);
            }
     
        }
        cout<<num-count<<endl;
    }

    return 0;
}