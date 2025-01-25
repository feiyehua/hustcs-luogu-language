#include<iostream>

using namespace std;
int n;
int t;
int minv=11143432,maxv;
double sum;

int main()
{
#ifdef LOCAL
    freopen("rating1.in","r",stdin);
#endif
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>t;
        minv=min(minv,t);
        maxv=max(maxv,t);
        sum+=t;
    }
    sum-=(minv+maxv);
    printf("%.2lf",sum/(n-2));
}
