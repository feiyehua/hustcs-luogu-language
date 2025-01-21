/*** 
 * @Author       : FeiYehua
 * @Date         : 2025-01-21 12:32:28
 * @LastEditTime : 2025-01-21 12:46:05
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : vem.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int n,m,k;
const int maxK=1e5+10;
int h[maxK];
const int maxN=5010;
int cnt[maxN];
bool can;
int main()
{
#ifdef TEST
    freopen("vem6-5.in", "r", stdin);
#endif
    cin>>n>>m>>k;
    for(int i=1;i<=k;i++)
    {
        cin>>h[i];
    }
    sort(h+1,h+1+k,greater<int>());
    for(int i=1;i<=k;i++)
    {
        //最高高度为h[i]
        int height=min(h[i],n);
        while((cnt[height]>=m)&&(!can))
        {
            height--;
            if(height<=0)
            {
                can=1;
            }
        }
        cnt[height]++;
    }
    if(can)
    {
        cout<<"No";
    }
    else 
    {
        cout<<"Yes";
    }
}
