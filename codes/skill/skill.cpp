#include<iostream>
#include<algorithm>
#include<functional>
#include<queue>
using namespace std;
int n;
struct ski{
    int t,c;
    bool operator<(const ski& b) const
    {
        return t<b.t;
    }
    bool operator>(const ski& b) const
    {
        return t>b.t;
    }
}tmp;
priority_queue<ski,vector<ski>> skills;
int m,k;
//很明显每次操作一定是要对冷却时间最大的技能操作，否则操作无意义。
int main()
{
#ifdef LOCAL
    freopen("skill2.in","r",stdin);
#endif
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>tmp.t>>tmp.c;
        skills.push(tmp);
    }
    while(m>=skills.top().c&&skills.top().t>0)
    {
        tmp=skills.top();
        skills.pop();
        tmp.t--;
        m-=tmp.c;
        skills.push(tmp);
    }
    cout<<skills.top().t;
}
