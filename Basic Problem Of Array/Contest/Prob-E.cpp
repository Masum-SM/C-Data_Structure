/*
A football competition has just finished.
The players have been given points for scoring goals and points for committing fouls.
Now, it is up to Alex to find the best player in the tournament.
As a programmer, your job is to help Alex by telling him the highest number of points achieved by some player.

You are given two sequences A1,A2,...An & B1,B2,....Bn
 .For each valid i, player i scored A_i goals and committed B_i fouls.
 For each goal, the player that scored it gets 20 points, and for each foul,
 10 points are deducted from the player that committed it.
 However, if the resulting number of points of some player is negative, this player will be considered to have 00 points instead.

You need to calculate the total number of points gained by each player and tell Alex the maximum of these values.

Input
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1,A2,....An.
​
 .
The third line contains NN space-separated integers B1,B2,...Bn.

INPUT : 
2
3
40 30 50
2 4 20
1
0
10

OUTPUT:
800
0
*/

#include <bits/stdc++.h>
using namespace std;

int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int num_player;
        cin >> num_player;
        int goal[num_player+1], faul[num_player+1];

        for (int i = 0; i < num_player; i++)cin >> goal[i];
     
        for (int i = 0; i < num_player; i++)cin >> faul[i];
   
        int ans = 0;
        for(int i = 0; i<num_player; i++){
            ans = max(ans,max(goal[i]*20 - faul[i]*10,0));
        }
        cout<<ans<<endl;
    }

    return 0;
}