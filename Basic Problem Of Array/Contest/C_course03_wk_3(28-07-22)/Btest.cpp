#include <bits/stdc++.h>
using namespace std;
int arr_2[500001];

int ready(int d, int num, int inx, int arr[])
{
    if (d == num)
    {
        arr_2[inx] = arr[d];
        return arr[d];
    }
    int x, y;
    x = ready(d, (d + num) / 2, inx * 2, arr);
    y = ready((d + num) / 2 + 1, num, inx * 2 + 1,arr);
    if(x>y) arr_2[inx] = y;
    else arr_2[inx] = x;
    return arr_2[inx];
}
int test_case(int d, int num, int inx, int b, int z)
{
    int inf = 100000;
    if(z<d || num<b)
        return inf;
    if(d>=b && num<=z)
        return arr_2[inx];
    int x, y;
    x = test_case(d, (d+num)/2, inx*2, b, z);
    y = test_case((d+num)/2+1, num, inx*2+1, b, z);
    return min(x, y);
}
int main()
{
    int tc;
    scanf("%d",&tc);
   
    int x = 1;
    while (tc--)
    {
        int num, lp;
        scanf("%d%d",&num,&lp);
        int arr[num+1];
        for (int i = 1; i <= num; i++)
        {
            scanf("%d",&arr[i]);
            
        }
        ready(1 , num , 1 , arr);
        printf("Case %d:\n",x);
        
        while (lp--)
        {
            
            int lb, ub;
            scanf("%d%d",&lb,&ub);
            
          printf("%d\n",test_case(1,num,1,lb,ub));
          
           
        }
        x++;
    }

    return 0;
}