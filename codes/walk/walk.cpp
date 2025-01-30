#include <iostream>
#include <cstring>
using namespace std;
int n, m;
int x, y, c;
int bo[110][110];
// 1黄色，0红色，-1无色
int va[110][110];
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int nextx,nexty,nextv;
void dfs(int x, int y, int v,int t)
{
    if (x<=0||y<=0||x>m||y>m||v >= va[x][y])
    {
        return;
    }
    va[x][y]=v;
    for(int i=0;i<=3;i++)
    {
        nextx=x+dx[i];
        nexty=y+dy[i];
        nextv=v;
        if(bo[nextx][nexty]==-1&&bo[x][y]==-1)
        {
            continue;
        }
        else if(bo[nextx][nexty]==-1)
        {
            nextv+=2;
            t=bo[x][y];
        }
        else if((bo[nextx][nexty]!=bo[x][y]&&bo[x][y]!=-1)||(bo[x][y]==-1&&bo[nextx][nexty]!=t))
        {
            nextv+=1;
        }
        // if(bo[nextx][nexty]!=-1)
        // {
        //     t=0;
        // }
        dfs(nextx,nexty,nextv,t);
    }

}
int main()
{
#ifdef LOCAL
    freopen("walk20.in", "r", stdin);
#endif
    cin >> m >> n;
    memset(bo, 0xff, sizeof bo);
    memset(va, 0x3f, sizeof va);
    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y >> c;
        bo[x][y] = c;
    }
    dfs(1,1,0,0);
    if(va[m][m]>=1e9)
    {
        cout<<"-1";
    }
    else 
    {
        cout<<va[m][m];
    }
}
