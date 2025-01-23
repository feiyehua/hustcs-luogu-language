/*** 
 * @Author       : FeiYehua
 * @Date         : 2025-01-23 09:16:42
 * @LastEditTime : 2025-01-23 09:47:40
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : matrix.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>
#include<cmath>
#include<cstring>
#define int long long
using namespace std;
const long long MOD=998244353;
int n;
struct m{
    int c[4][4];
}ms[100];
m r;
int f1,f2;
void matrixMul(const m& a,const m& b,m& r)
{
    for(int i=1;i<=3;i++)
    {
        for(int k=1;k<=3;k++)
        {
            for(int j=1;j<=3;j++)
            {
                r.c[i][j]+=a.c[i][k]*b.c[k][j];
                r.c[i][j]%=MOD;
            }
        }
    }
}
signed main()
{
#ifdef LOCAL
    freopen("matrix03.in","r",stdin);
#endif
    r.c[1][1]=1;
    r.c[2][2]=1;
    r.c[3][3]=1;
    cin>>n;
    n-=2;//需要矩阵的n-1次方
    cin>>f1>>f2;
    cin>>ms[1].c[1][1]>>ms[1].c[2][1]>>ms[1].c[3][1];
    ms[1].c[1][2]=1,ms[1].c[3][3]=1;
    for(int i=2;i<=log2(n)+1;i++)
    {
        matrixMul(ms[i-1],ms[i-1],ms[i]);
    }
    int p=1;
    while(n>0)
    {
        if(n%2)
        {
            m tmp;
            memset(&tmp,0,sizeof(tmp));
            matrixMul(r,ms[p],tmp);
            r=tmp;
        }
        p++;
        n/=2;
    }
    cout<<(f2*r.c[1][1]+f1*r.c[2][1]+r.c[3][1])%MOD;
}
