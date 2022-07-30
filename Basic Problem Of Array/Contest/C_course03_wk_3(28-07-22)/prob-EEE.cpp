#include <bits/stdc++.h>
using namespace std;
int n;
int arr_g[1000001];

void ready(int index, int item)
{
    for (int i = index; i <= n; i = i + (i & -i))
    {
        arr_g[i] = arr_g[i] + item;
    }
}
int sum(int index)
{
    int sum = 0;
    for (int i = index; i>= 1; i = i - (i & -i))
    {
        sum = sum + arr_g[i];
    }
    return sum;
}

int main()
{
    int test_case;
    scanf("%d",&test_case);
    int cs = 1;
    while(test_case--)
    {
        memset(arr_g,0,sizeof(arr_g));
        int q , item;
        scanf("%d%d",&n,&q);
        for(int j = 1; j<=n;j++)
        {
           
            scanf("%d",&item);
            ready(j,item);
        }
        printf("Case %d:\n",cs);
        for(int i = 1;i<=q;i++)
        {
            int num;
            scanf("%d",&num);
            
            if(num==1)
            {
                int x;
                scanf("%d",&x);
              
                int number = sum(x+1) - sum(x);
                printf("%d\n",number);
                
                ready(x+1, -number);
            }
            else if(num == 2)
            {
                int y,value;
                scanf("%d%d",&y,&value);
              
                ready(y+1,value);

            }
            else if(num == 3){
                int z , d;
                scanf("%d%d",&z,&d);
                
                printf("%d\n",sum(d+1)-sum(z));
            }
        }
        cs++;
    }

    return 0;
}