#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
   cin.tie(NULL);

    int tc;
    scanf("%d",&tc);
    // cin>>tc;
    int cs = 1;
    while(tc--)
    {
        int num , lp;
        scanf("%d%d",&num,&lp);
        // cin>>num>>lp;
        int arr[num+1];
        for(int i = 1; i<=num;i++){
            scanf("%d",&arr[i]);
            // cin>>arr[i];
        }
        printf("Case %d:\n",cs);
        while(lp--){
            int lb , ub;
            scanf("%d%d",&lb,&ub);
            // cin>>lb>>ub;
            int min = arr[lb];
            for(int i = lb ; i <= ub ; i++)
            {
                // min = arr[lb];
                if(min > arr[i]){
                    min = arr[i];
                }
            }
            printf("%d\n",min);
            // cout<<min<<endl;
        }
        cs++;
    }


    return 0;
}