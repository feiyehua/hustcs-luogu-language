#include<iostream>

using namespace std;
int n,m;
int x,y;
int sumOfX,sumOfY;
struct pt{
    int x,y;
}pts[110];

int main()
{
#ifdef LOCAL
    freopen("jump1.in","r",stdin);
#endif
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;
        sumOfX+=x;
        sumOfY+=y;
    }
    for(int i=1;i<=m;i++)
    {
        cin>>pts[i].x>>pts[i].y;
        pts[i].x+=sumOfX;
        pts[i].y+=sumOfY;
        cout<<pts[i].x<<" "<<pts[i].y<<"\n";
    }
}
