#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
using namespace std;
int n;
const int maxN=2e5+10;
int a,b,c;
int q,l,r;
int solu1[maxN];
map<int,int> solu;

char eq[100];
template<typename T>
void fr(T& num)
{
    char ch;
    T sign=1;
    ch=getchar_unlocked();
    num=0;
    while(ch>'9'||ch<'0')
    {
        if(ch=='-') sign=-1;
        ch=getchar_unlocked();
    }
    while(isdigit(ch))
    {
        num=num*10+ch-'0';
        ch=getchar_unlocked();
    }
    (num)*=sign;
    return;
}

int main()
{
#ifdef LOCAL
    freopen("ans.out","w",stdout);
    freopen("answer24.in","r",stdin);
#endif
    // cin>>n>>q;
    fr(n);
    fr(q);
    for(int i=1;i<=n;i++)
    {
        scanf("%99s",eq);
        char* next,*teq; 
        a=strtol(eq,&next,0);
        teq=next+1;
        b=strtol(teq,&next,0);
        c=strtol(next+1,NULL,0);
        solu[(c-b)/a]=1;
    }

    // sort(solu+1,solu+1+n);
    int cnt=0;
    for(auto it:solu)
    {
        cnt++;
        solu1[cnt]=it.first;
    }
    for(int i=1;i<=q;i++)
    {
        // cin>>l>>r;
        fr(l);
        fr(r);
        auto u=lower_bound(solu1+1,solu1+1+cnt,l);
        auto v=upper_bound(solu1+1,solu1+1+cnt,r);
        printf("%ld\n",v-u);
    }
}
