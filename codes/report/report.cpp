/***
 * @Author       : FeiYehua
 * @Date         : 2025-01-21 11:50:08
 * @LastEditTime : 2025-01-21 11:57:11
 * @LastEditors  : FeiYehua
 * @Description  :
 * @FilePath     : report.cpp
 * @     © 2024 FeiYehua
 */
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int n;
int b;
const int maxN = 2e4 + 10;
int h[maxN];
int cur;
int cnt;
int main()
{
#ifdef TEST
    freopen("report19.in", "r", stdin);
#endif
    cin >> n >> b;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    sort(h + 1, h + 1 + n, greater<int>());
    while (cur < b)
    {
        cnt++;
        cur += h[cnt];
    }
    cout << cnt;
}