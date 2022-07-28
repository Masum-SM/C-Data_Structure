/*
There are nn balls (nn is even) in the box. Each ball has a positive integer written on it.
n/2 people will play new ball game. At the beginning of the game each player gets two balls, each ball is given to exactly one player.

Find the way to distribute balls such that the sum of values written on the balls will be equal for each player.
It is guaranteed that it is always possible.

Input
The first line of the input contains integer nn (2 ≤ n ≤ 100)(2 ≤ n ≤ 100) — the number of balls in the box. It is guaranteed that nn is even.
The second line contains the sequence of nn positive integers a1,....an
​
(1 ≤ a_i ≤ 100) is equal to the number written on the ii-th ball.

Output
Print n / 2n/2 pairs of integers, the ii-th pair denote the balls that should be given to the ii-th player.
Each ball should be given to exactly one player.
Balls are numbered in the order they appear in the input.
It is guaranteed that a solution exists. If there are several correct answers, you are allowed to print any of them.

Sample Inputs
6

1 5 7 4 4 3


4

10 10 10 10
Sample Outputs
1 3

6 2

4 5


1 2

3 4
Note
In the first sample, balls are distributed in such a way that each player has the sum of numbers written on his balls equal to 8.
In the second sample, all values ai are equal. Thus, any distribution is acceptable.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int value = sum / (n / 2);

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] + arr[j] == value && i != j)
                {
                    cout << i + 1 << " " << j + 1 << endl;
                    arr[i] = -1;
                    arr[j] = -1;
                }
            }
        }
    }
}