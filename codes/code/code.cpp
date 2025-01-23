/*** 
 * @Author       : FeiYehua
 * @Date         : 2025-01-23 12:41:00
 * @LastEditTime : 2025-01-23 13:08:58
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : code.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>

using namespace std;
int n;
int m;
int a[100];
int b[100];
int t;
//首先考虑ai全部是2的情况，不难发现其实就是二进制表示一个数，显然b是可以很方便地唯一确定的。
//再考虑ai更大的情况，
int main()
{
#ifdef LOCAL
    freopen("code19.in","r",stdin);
#endif
    a[0]=1;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>t;
        a[i]=a[i-1]*t;
    }
    for(int i=n;i>=1;i--)
    {
        b[i]=m/a[i-1];
        m%=a[i-1];
    }
    for(int i=1;i<=n;i++)
    {
        cout<<b[i]<<" ";
    }
}
