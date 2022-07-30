#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int len = str.size();
    int a ;
    int z;
    int count = 0;
    for(int i = 0 ; i < len ; i++){
        if(str[i] == 'A')
        {
            a = i;
            break;
        }
    }
    for(int i = len-1 ; i > a ; i--){
        if(str[i] == 'Z')
        {
            z = i;
            break;
        }
    }
    for(int i = a ; i <= z ; i++)
    {
        count++;
    }
    cout<<count<<endl;
    return 0;
}