#include <iostream>
#include <vector>
using namespace std;
int n;
int c;
int t;
struct node
{
    vector<int> req;

} a[10000];
int cnt;
bool vis[10000];
void dfs(int n)
{    
    for (auto i : a[n].req)
    {
        if (!vis[i])
        {
            cnt++;
            vis[i] = 1;
            dfs(i);
        }
    }
}
template <typename T>
void fr(T &num)
{
    static char ch;
    T sign = 1;
    ch = getchar_unlocked();
    num = 0;
    while (ch > '9' || ch < '0')
    {
        if (ch == '-')
            sign = -1;
        ch = getchar_unlocked();
    }
    while (isdigit(ch))
    {
        num = num * 10 + ch - '0';
        ch = getchar_unlocked();
    }
    (num) *= sign;
    return;
}
int main()
{
#ifdef LOCAL
    freopen("task3.in", "r", stdin);
#endif
    // cin >> n;
    fr(n);
    for (int i = 1; i <= n; i++)
    {
        // cin >> c;
        fr(c);

        for (int j = 1; j <= c; j++)
        {
            // cin >> t;
            fr(t);
            a[i].req.push_back(t);
        }
    }
    dfs(1);
    cout << cnt+1;
}
