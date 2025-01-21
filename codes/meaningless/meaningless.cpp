/***
 * @Author       : FeiYehua
 * @Date         : 2025-01-21 13:07:26
 * @LastEditTime : 2025-01-21 13:28:19
 * @LastEditors  : FeiYehua
 * @Description  :
 * @FilePath     : meaningless.cpp
 * @     © 2024 FeiYehua
 */
#include <iostream>

using namespace std;
#define int long long
int n;
// 不难发现k>=2，因此指数为1的因数一定会被忽略。
// 所以只需要筛出小于1e5的素数即可。
// 可以使用线性筛。
const int maxN = 1e5 + 10;
bool isPrime[maxN];
int prime[maxN];
int q, a, k;
int cnt;
void getPrime()
{
    isPrime[1] = 1;
    for (int i = 2; i <= 1e5 + 5; i++)
    {
        if (isPrime[i] == 0) // 说明这个数是素数
        {
            cnt++;
            prime[cnt] = i;
        }
        for (int j = 1; j <= cnt; j++)
        {
            if (i * prime[j] >= 1e5 + 5)
            {
                break;
            }
            isPrime[i * prime[j]] = 1;
            if (i % prime[j] == 0)
            {
                break;
            }
        }
    }
}
signed main()
{
#ifdef LOCAL
    freopen("meaningless14.in", "r", stdin);
#endif
    cin >> q;
    getPrime();
    for (int i = 1; i <= q; i++)
    {
        cin >> a >> k;
        int r = 1;
        for (int j = 1; j <= cnt; j++)
        {
            int cnt2 = 0;
            if (a <= prime[j])
            {
                break;
            }
            while (a % prime[j] == 0)
            {
                a /= prime[j];
                cnt2++;
            }
            if (cnt2 >= k)
            {
                for (int l = 1; l <= cnt2; l++)
                {
                    r *= prime[j];
                }
            }
        }
        cout << r << endl;
    }
}