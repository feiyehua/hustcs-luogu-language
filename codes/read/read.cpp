/***
 * @Author       : FeiYehua
 * @Date         : 2025-01-25 09:59:19
 * @LastEditTime : 2025-01-25 10:01:38
 * @LastEditors  : FeiYehua
 * @Description  :
 * @FilePath     : read.cpp
 * @     © 2024 FeiYehua
 */
#include <iostream>
#include <queue>
using namespace std;
int n, m;
int t;
queue<int> q;
bool inBook[1100];
int cnt;
int main()
{
#ifdef LOCAL
    freopen("read10.in", "r", stdin);
#endif
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (inBook[t])
        {
            continue;
        }
        // 不在书内
        cnt++;

        if (q.size() >= m)
        {
            inBook[q.front()] = 0;
            q.pop();
        }
        q.push(t);
        inBook[t] = 1;
    }
    cout<<cnt<<endl;
}
