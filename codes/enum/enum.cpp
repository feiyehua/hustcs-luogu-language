/*** 
 * @Author       : FeiYehua
 * @Date         : 2025-01-25 09:54:28
 * @LastEditTime : 2025-01-25 09:54:50
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : enum.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>

using namespace std;
int n;
int x;
int cnt;
void u(int t)
{
    while(t>0)
    {
        if(t%10==x)
        {
            cnt++;
        }
        t/=10;
    }
}
int main()
{
#ifdef LOCAL
    freopen("enum10.in","r",stdin);
#endif
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        u(i);
    }
    cout<<cnt<<endl;
}
