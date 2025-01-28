/*** 
 * @Author       : FeiYehua
 * @Date         : 2025-01-28 14:05:50
 * @LastEditTime : 2025-01-28 14:11:44
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : history.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>
#include<string>
using namespace std;
int n;
string s,t;
int ls,rs,lt,rt;
int main()
{
#ifdef LOCAL
    freopen("history10.in","r",stdin);
    freopen("ans.out","w",stdout);
#endif
    cin>>s>>t;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>ls>>rs>>lt>>rt;
        if(s.substr(ls-1,rs-ls+1)==t.substr(lt-1,rt-lt+1))
        {
            cout<<"ovo\n";
        }
        else if(s.substr(ls-1,rs-ls+1)<t.substr(lt-1,rt-lt+1))
        {
            cout<<"yifusuyi\n";
        }
        else 
        {
            cout<<"erfusuer\n";
        }

    }
    
}
