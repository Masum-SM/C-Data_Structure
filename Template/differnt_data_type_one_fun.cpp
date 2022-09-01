#include<bits/stdc++.h>
using namespace std;
template <typename t1 , typename t2>

t2 sum(t1 a, t1 b){
    t2 sum = (a + b) * 2.7;
    return sum;
}
int main(){
    double sum_1 = sum<int,double>(7,5);
    cout<<"Sum is : "<<sum_1<<endl;

    return 0;
}