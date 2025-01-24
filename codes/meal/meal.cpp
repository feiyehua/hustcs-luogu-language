/*** 
 * @Author       : FeiYehua
 * @Date         : 2025-01-23 15:04:54
 * @LastEditTime : 2025-01-24 11:52:10
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : meal.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int n,t;
struct dish{
    int par;
    int t;
    vector<int> son;
}dishes[110];
int T;
//所有菜品会最后形成一个森林结构。
int p;
int earlistStartTime[110];
int latestStartTime[110];
int maxT;
void dfs(int dish,int time)
{
    if(dishes[dish].son.empty())
    {
        latestStartTime[dish]=t+1-dishes[dish].t;
        return;
    }
    for(int son:dishes[dish].son)
    {
        earlistStartTime[son]=time+dishes[dish].t;
        dfs(son,time+dishes[dish].t);
        latestStartTime[dish]=min(latestStartTime[dish],latestStartTime[son]);
    }
    latestStartTime[dish]-=dishes[dish].t;
}
int main()
{
#ifdef LOCAL
    freopen("meal14.in","r",stdin);
    freopen("ans.ans","w",stdout);

#endif
    memset(latestStartTime,0x3f,sizeof latestStartTime);
    cin>>t>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p;
        dishes[p].son.push_back(i);
        dishes[i].par=p;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>T;
        dishes[i].t=T;
    }
    dfs(0,1);
    for(int i=1;i<=n;i++)
    {
        cout<<earlistStartTime[i]<<" ";
        maxT=max(maxT,earlistStartTime[i]+dishes[i].t);
    }
    if(maxT-1<=t)
    {
        cout<<"\n";
        for(int i=1;i<=n;i++)
        {
            cout<<latestStartTime[i]<<" ";
        }
    }
}
