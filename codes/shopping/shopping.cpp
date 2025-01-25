/*** 
 * @Author       : FeiYehua
 * @Date         : 2025-01-25 10:10:43
 * @LastEditTime : 2025-01-25 10:17:07
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : shopping.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>
#include<algorithm>

using namespace std;
int n,q;
int g[1100];
int x,nn;
void getG(int x,int nn)//
{
    int mod=1;
    for(int i=1;i<=nn;i++)
    {
        mod*=10;
    }
    for(int i=1;i<=n;i++)
    {
        if(g[i]%mod==x)
        {
            cout<<g[i]<<endl;
            return;
        }
    }
    cout<<"-1\n";
}
int main()
{
#ifdef LOCAL
    freopen("shopping5.in","r",stdin);
#endif
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        cin>>g[i];
    }
    sort(g+1,g+1+n);
    for(int i=1;i<=q;i++)
    {
        cin>>nn>>x;
        getG(x,nn);
    }
}
