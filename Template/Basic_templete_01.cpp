#include<bits/stdc++.h>
using namespace std;
template <typename t1>
t1 sum(t1 a, t1 b){
    t1 sum = a + b;
    return sum;
}
int main(){
    int sum_1 = sum<int>(5,5);
    cout<<"Sum is : "<<sum_1<<endl;

    double sum_2 = sum<double>(7.5,5.8);
    cout<<"Sum is : "<<sum_2<<endl;
    return 0;
}