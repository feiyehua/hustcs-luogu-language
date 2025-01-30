/*** 
 * @Author       : FeiYehua
 * @Date         : 2025-01-30 09:56:36
 * @LastEditTime : 2025-01-30 10:03:58
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : nnzdqzrc.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>
#include<cmath>
using namespace std;
int n;
int a[200];
int s[10];
int sum;
int ans;
int aans;
void dfs(int x,int s)
{
    if(x>n)
    {
        ans=min(max(sum-s,s),ans);
        return;
    }
    dfs(x+1,s+a[x]);
    dfs(x+1,s);
}
int main()
{
#ifdef LOCAL
    freopen("nnzdqzrc5.in","r",stdin);
#endif
    for(int i=1;i<=4;i++)
    {
        cin>>s[i];
    }
    for(int i=1;i<=4;i++)
    {
        sum=0;
        ans=114514;
        n=s[i];
        for(int j=1;j<=s[i];j++)
        {
            cin>>a[j];
            sum+=a[j];
        }
        dfs(1,0);
        // cout<<ans<<endl;
        aans+=ans;
    }
    cout<<aans<<endl;
}
