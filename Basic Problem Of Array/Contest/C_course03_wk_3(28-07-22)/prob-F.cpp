#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x , y , z;
    cin>>x>>y>>z;
    if(x == y && x ==z && y == z){
        cout<<1<<endl;
    }
    else if(x == y && x != z || x != y && x == z || y == z && y != x || y == x && y != z){
        cout<<2<<endl;
    }
    else if(x != y && x != z && y != z){
        cout<<3<<endl;
    }
}