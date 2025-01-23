/*** 
 * @Author       : FeiYehua
 * @Date         : 2025-01-23 12:30:47
 * @LastEditTime : 2025-01-23 12:39:35
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : constr.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>
#define int long long
using namespace std;
int N;
int a,b;
int X1,X2,Y1,Y2;
int n,s,w,e;
int ans;
signed main()
{
#ifdef LOCAL
    freopen("constr10.in","r",stdin);
#endif
    cin>>N>>a>>b;
    for(int i=1;i<=N;i++)
    {
        cin>>X1>>Y1>>X2>>Y2;
        if(X1>=a||Y1>=b||X2<=0||Y2<=0)
        {
            continue;
        }
        n=min(b,Y2);
        s=max(0ll,Y1);
        e=min(X2,a);
        w=max(0ll,X1);
        ans+=(n-s)*(e-w);
    }
    cout<<ans<<endl;
}
