#include<iostream>

using namespace std;
int n,k;
bool isPrime(int x)
{
    if(x<=1)
    {
        return 0;
    }
    if(x==2)
    {
        return 1;
    }
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int cnt;
int x[100];
void dfs(int c,int d,int sum)//考虑第c个，当前已经选了d个
{
    if(d+1==k&&isPrime(sum+x[c]))
    {
        cnt++;
    }
    if(n-c+1+d<k)
    {
        return;
    }
    if(c>=n)
    {
        return;
    }
    if(d+1<k)
    {
        dfs(c+1,d+1,sum+x[c]);
    }
    dfs(c+1,d,sum);
}
int main()
{
#ifdef LOCAL
    freopen("choose25.in","r",stdin);
#endif
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>x[i];
    }
    dfs(1,0,0);
    cout<<cnt<<endl;
    
}
