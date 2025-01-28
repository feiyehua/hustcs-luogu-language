/*** 
 * @Author       : FeiYehua
 * @Date         : 2025-01-27 13:04:35
 * @LastEditTime : 2025-01-27 13:44:32
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : nlp.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
int n,m;
map<string,string> a;
string s;
string num;
void strProc(string& s)
{
    while(1)
    {
        auto itf=find(s.begin(),s.end(),'{');
        auto ite=find(s.begin(),s.end(),'}');
        if(itf==s.end())
        {
            return;
        }
        string tmp=s.substr(itf-s.begin()+1,ite-(itf+1));
        s.replace(itf,ite+1,a[tmp]);
    }
}
int main()
{
#ifdef LOCAL
    freopen("nlp5.in","r",stdin);
    freopen("ans.ans","w",stdout);
#endif
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>s>>num;
        a[s]=num;
    }
    getchar();
    for(int i=1;i<=m;i++)
    {
        getline(cin,s);
        // cout<<s<<endl;
        strProc(s);
        cout<<s<<endl;
    }
    
}
