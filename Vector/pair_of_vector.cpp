// A vector that contain one or more pairs,
// A pair can contain two value , maybe same type of different type.


/* 
INPUT:
3     
1 2
0 0
3 1

OUTPUT:
Size: 3
First value : 1 Second value : 2
First value : 0 Second value : 0
First value : 3 Second value : 1

*/

#include<bits/stdc++.h>
using namespace std;

//================> PRINT PARI'S VALUES <====================
void printVector(vector< pair<int,int> >PV){
    int s;
    s = PV.size();
    cout<<"Size: "<<s<<endl;
    for(int i = 0 ; i < PV.size() ; i++){
        int first_value = PV[i].first;
        int second_value = PV[i].second;
        cout<<"First value : "<<first_value<<" "<<"Second value : "<<second_value<<endl;;
    }
}


int main(){

    vector< pair<int,int> >PV ;           // vector with 0 size which contain pairs.
    int n;                                // number of pairs contain the vector.
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        int first_value ,second_value;    // first value in each pair
        cin>>first_value>>second_value;   // second value in each pair
        

        //================> two way to push_back pair in vector <====================
        PV.push_back({first_value,second_value});
        // PV.push_back(make_pair(first_value,second_value));
    }


    printVector(PV);

    return 0;
}
