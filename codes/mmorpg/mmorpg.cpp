/*** 
 * @Author       : FeiYehua
 * @Date         : 2025-01-28 10:50:30
 * @LastEditTime : 2025-01-28 11:30:55
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : mmorpg.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>
#include<map>

using namespace std;
int n,m,k;
string s;
map<string,int> a;
int main()
{
#ifdef LOCAL
    freopen("mmorpg3.in","r",stdin);
    freopen("ans.out","w",stdout);
#endif
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        a[s]=1;
    }
    for(int i=1;i<=m;i++)
    {
        cin>>s;
        auto it=a.find(s);
        if(it!=a.end())
        {
            a.erase(it);
        }
    }
    for(int i=1;i<=k;i++)
    {
        cin>>s;
        a[s]=1;
    }
    for(auto i:a)
    {
        cout<<i.first<<endl;
    }
}
