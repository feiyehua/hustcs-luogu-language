/*** 
 * @Author       : FeiYehua
 * @Date         : 2025-01-24 12:00:35
 * @LastEditTime : 2025-01-24 12:06:10
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : pattern.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>
#include<string>
#include<map>

using namespace std;
int n;
struct matrix{
    map<string,int> m;
    bool operator==(const matrix& b) const
    {
        return m==b.m;
    }
}matrixes[110];
string s;
int main()
{
#ifdef LOCAL
    freopen("pattern5.in","r",stdin);
#endif
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=8;j++)
        {
            cin>>s;
            matrixes[i].m[s]++;
        }
    }
    for(int i=1;i<=n;i++)
    {
        int cnt=0;
        for(int j=1;j<=i;j++)
        {
            if(matrixes[i]==matrixes[j])
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
