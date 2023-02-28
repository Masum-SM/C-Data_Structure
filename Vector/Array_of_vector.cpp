
/* 

INPUT:
3
3
1 2 3
2
8 7
4
0 0 0 0

OUTPUT:
Size : 3
1 2 3 
Size : 2
8 7 
Size : 4
0 0 0 0

 */

//=================================== CONCEPT ==============================

// In array of vector, the number of row is fixed but number of column is dynamic. 
// row is array size, and column is vector size
// Array size is fixed after declaring but vector size is dynamic.


#include<bits/stdc++.h>
using namespace std;

// ==============================> Print Vector <==========================
void printVector(vector<int> v){
    int s = v.size();
    cout<<"Size : "<<s<<endl;
    for(auto element : v){
        cout<<element<<" ";
    }
    cout<<endl;
}


int main(){
    int num_of_vector;
    cin>>num_of_vector;

    vector<int> v[num_of_vector];                    // An array of vector which contain vector.
    for(int i = 0 ; i < num_of_vector ; i++){       // This loop for taking every vector.

        int num_of_value_each_vector;               // number of value for individual vector      
        cin>>num_of_value_each_vector;

        for(int j = 0; j<num_of_value_each_vector;j++){
            int value;                            // value that will store in individual vector
            cin>>value;
            v[i].push_back(value);
        }
        
    }

    for(int i = 0 ; i < num_of_vector ; i++){
        printVector(v[i]);                    // it will pass a single vector.
    }

    return 0;
}
