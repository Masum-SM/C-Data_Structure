// In vector of vector, the number of row is dynamic and number of column is also dynamic. 
// row and column both are dynamic bcz both are vector.
// A vector contain other vectors.


/*
INPUT: 
4
3
9 8 7
1
10
4
2 5 3 0
2
11 22

OUTPUT:
Size : 3
9 8 7
Size : 1
10
Size : 4
2 5 3 0
Size : 2
11 22

 */


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
    vector< vector<int> > vec_of_vec(num_of_vector);

    for(int i = 0 ; i < num_of_vector ; i++){
        int num_of_value_in_vector;
        cin>>num_of_value_in_vector;

        for(int j = 0 ; j < num_of_value_in_vector ; j++){
            int value;
            cin>>value;
            vec_of_vec[i].push_back(value);
        }
    }

    for(int i = 0; i<num_of_vector;i++){
        printVector(vec_of_vec[i]);
    }


    return 0;
}
