/*** 
 * @Author       : FeiYehua
 * @Date         : 2025-01-27 12:41:16
 * @LastEditTime : 2025-01-27 12:54:57
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : fight.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>
#include<cmath>
#define int long long
using namespace std;
int n;
const int maxN=1e5+10;
int c[maxN];
int m;
int p,s1,s2;
int sumOfA;
int sumOfB;
int ans=__LONG_LONG_MAX__;
int loc;
signed main()
{
#ifdef LOCAL
    freopen("fight20.in","r",stdin);
#endif
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>c[i];
    }
    cin>>m>>p>>s1>>s2;
    c[p]+=s1;
    for(int i=1;i<m;i++)
    {
        sumOfA+=(c[i])*(m-i);
    }
    for(int i=m+1;i<=n;i++)
    {
        sumOfB+=c[i]*(i-m);
    }
    ans=abs(sumOfA-sumOfB);
    loc=m;
    for(int i=1;i<=n;i++)
    {
        if(i<m)
        {
            if(ans>abs(sumOfA+s2*(m-i)-sumOfB))
            {
                ans=abs(sumOfA+s2*(m-i)-sumOfB);
                loc=i;
            }
        }
        if(i>m)
        {
            if(ans>abs(sumOfA-s2*(i-m)-sumOfB))
            {
                ans=abs(sumOfA-s2*(i-m)-sumOfB);
                loc=i;
            }
        }
    }
    cout<<loc<<endl;
}
