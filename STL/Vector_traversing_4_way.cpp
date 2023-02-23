
#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> vec(5,-2);
  // traverse as an array
  for(int i = 0;i<vec.size();i++){
    cout<<vec[i]<<" ";
  }

  cout<<endl<<endl;
  // vector traversing using iterator.
  vector<int> ::iterator it;
  for(it=vec.begin(); it != vec.end();it++){
    cout<<*it<<" ";
  }

  cout<<endl<<endl;

  // vector traversing using auto keyword
  for(auto element : vec){
    cout<<element<<" ";
  }
  cout<<endl<<endl;



  return 0;
}
