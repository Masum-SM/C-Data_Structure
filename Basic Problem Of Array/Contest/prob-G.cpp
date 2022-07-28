/*
“You won’t get caught if you hide behind someone.”

Sang-Woo advises Gi-Hun to hide behind someone to avoid getting shot.

Gi-Hun follows Sang-Woo's advice and hides behind Ali, who saved his life earlier. Gi-Hun and Ali both have the same height, K.
Many players saw this trick and also started hiding behind Ali.

Now, there are NN players standing between Gi-Hun and Ali in a straight line, with the ith player having height H_iH 

. Gi-Hun wants to know the minimum number of players who need to get shot so that Ali is visible in his line of sight.


Input Format
The first line of input contains a single integer TT, denoting the number of test cases. The description of TT test cases follows.
The first line of each test case contains two space-separated integers NN and KK, denoting the total number of players between Gi-Hun and Ali and the height of both of them respectively.
The second line of each test case contains NN space-separated integers, denoting the heights of the players between Gi-Hun and Ali.


INPUT : 
3
4 10
2 13 4 16
5 8
9 3 8 8 4
4 6
1 2 3 4

OUTPUT : 
2
1
0
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int num_players,height_k;
        cin>>num_players>>height_k;
        int players_height[num_players+1];

        for(int i = 0 ; i <num_players ; i++)
        {
            cin>>players_height[i];
        }
        int count = 0;
        for(int i = 0 ; i < num_players ;  i++)
        {
            if(height_k < players_height[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}