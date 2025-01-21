/*** 
 * @Author       : FeiYehua
 * @Date         : 2025-01-21 12:50:01
 * @LastEditTime : 2025-01-21 12:54:34
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : vector.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>

using namespace std;
int n;
int m;
const int maxN=1e3+10;
const int maxM=20;
int v[maxN][maxM];
bool ok(int x,int y)//判断x向量的所有维度是不是均小于y
{
    for(int i=1;i<=m;i++)
    {
        if(v[x][i]>=v[y][i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>v[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1;j++)
        {
            if(j==i) continue;
            if(j==n+1)
            {
                cout<<"0\n";
            }
            else 
            {
                if(ok(i,j))
                {
                    cout<<j<<endl;
                    break;
                }
            }
        }
    }
}