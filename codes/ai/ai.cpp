#include <iostream>
#include <vector>
#include <chrono>
// #define int long long
using namespace std;
bool frontFlag;
int q[10010][25];
int k[25][10010];
int t[10010][10010];
int v[10010][25];
long long r[10010][25];
long long b;
int a;
short w[10010];
int n, d;
bool endflag;

int p;
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
template <typename T>
void fw(T num)
{
    if (num < 0)
    {
        putchar_unlocked('-');
        num *= -1;
    }
    if (num <= 9)
    {
        putchar_unlocked(num + '0');
    }
    else
    {
        fw(num / 10);
        putchar_unlocked(num % 10 + '0');
    }
    return;
}

signed main()
{
#ifdef LOCAL
    freopen("ai3.in", "r", stdin);
    freopen("a.out","w",stdout);
    auto start = chrono::high_resolution_clock::now();
    cout << (&endflag - &frontFlag) / 1024 << endl;
#endif
    fr(n);
    fr(d);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            fr(q[i][j]);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            fr(k[j][i]);
        }
    }

    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            fr(v[i][j]);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        fr(w[i]);
    }
    for (int i = 1; i <= d; i++)
    {
        // if(w[i]==0) continue;
        for (int l = 1; l <= n; l++)
        {
            a=k[i][l];
            for (int j = 1; j <= d; j++)
            {
                t[i][j] += (a * v[l][j]); // 矩阵乘法
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        // if(w[i]==0) continue;
        for (int l = 1; l <= d; l++)
        {
            b=(long long)q[i][l];
            for (int j = 1; j <= d; j++)
            {
                r[i][j] += (b * (long long)t[l][j]);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            r[i][j] *= w[i];
            fw(r[i][j]);
            putchar_unlocked(' ');
        }
        putchar_unlocked('\n');
    }
#ifdef LOCAL
    auto end = chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> ms = end - start;
    std::cout << "Time taken: " << ms.count() << " milliseconds" << std::endl;
#endif
}