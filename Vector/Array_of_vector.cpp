
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


#include<bits/stdc++.h>
using namespace std;


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
