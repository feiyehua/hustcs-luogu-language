/*** 
 * @Author       : FeiYehua
 * @Date         : 2025-01-30 10:06:19
 * @LastEditTime : 2025-01-30 10:18:23
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : binary.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>
#include<algorithm>
using namespace std;
int n,m;
const int maxN=1e5+10;
int a[maxN];
int p,x,y;
// int u,v;
int main()
{
#ifdef LOCAL
    freopen("ans.out","w",stdout);
    freopen("binary13.in","r",stdin);
#endif
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    for(int i=1;i<=m;i++)
    {
        cin>>p;
        if(p==1)
        {
            cin>>x;
            auto u=upper_bound(a+1,a+1+n,x);
            auto v=lower_bound(a+1,a+1+n,x);
            cout<<u-v<<endl;
            continue;
        }
        else
        {
            cin>>x>>y;
        }
        if(p==2)
        {
            if(x>y)
            {
                cout<<"0\n";
                continue;
            }
            auto u=lower_bound(a+1,a+1+n,x);
            auto v=upper_bound(a+1,a+1+n,y);
            cout<<v-u<<endl;
        }
        else if(p==3)
        {
            if(x>=y)
            {
                cout<<"0\n";
                continue;
            }
            auto u=lower_bound(a+1,a+1+n,x);
            auto v=lower_bound(a+1,a+1+n,y);
            cout<<v-u<<endl;
        }
        else if(p==4)
        {
            if(x>=y)
            {
                cout<<"0\n";
                continue;
            }
            auto u=upper_bound(a+1,a+1+n,x);
            auto v=upper_bound(a+1,a+1+n,y);
            cout<<v-u<<endl;
        }
        else if(p==5)
        {
            if(x>=y)
            {
                cout<<"0\n";
                continue;
            }
            auto u=upper_bound(a+1,a+1+n,x);
            auto v=lower_bound(a+1,a+1+n,y);
            cout<<v-u<<endl;
        }
    }
    
}
