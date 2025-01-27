/***
 * @Author       : FeiYehua
 * @Date         : 2025-01-27 12:29:29
 * @LastEditTime : 2025-01-27 12:34:40
 * @LastEditors  : FeiYehua
 * @Description  :
 * @FilePath     : lhma.cpp
 * @     © 2024 FeiYehua
 */
#include <iostream>

using namespace std;
int n;
int cnt;
int sum;
int t;
bool o = 1;
int main()
{
#ifdef LOCAL
    freopen("lhma3.in", "r", stdin);
#endif
    cin >> n;
    while (cnt < n * n)
    {

        cin >> t;
        sum += t;
        o = !o;
        for (int i = 1; i <= t; i++)
        {
            cout << o;
            cnt++;
            if (cnt % n == 0)
            {
                cout << endl;
            }
        }
    }
}
