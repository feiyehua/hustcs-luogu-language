#include<iostream>
#include<string>
using namespace std;
int n;
string s;
string ans;
int sizeOfS;
void rev(string s,int l,int r)
{
    while(r>l)
    {
        swap(s[l],s[r]);
        l++;
        r--;
    }
    if(s<ans)
    {
        ans=s;
    }
}
int main()
{
#ifdef LOCAL
    freopen("time10.in","r",stdin);
#endif
    cin>>s;
    sizeOfS=s.size();
    s=" "+s;
    ans=s;
    for(int i=1;i<=sizeOfS;i++)
    {
        for(int j=1;j<=i;j++)
        {
            rev(s,j,i);
        }
    }
    ans.erase(ans.begin(),ans.begin()+1);
    cout<<ans;
}
