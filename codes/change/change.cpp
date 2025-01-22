/***
 * @Author       : FeiYehua
 * @Date         : 2025-01-22 23:27:08
 * @LastEditTime : 2025-01-22 23:39:51
 * @LastEditors  : FeiYehua
 * @Description  :
 * @FilePath     : change.cpp
 * @     © 2024 FeiYehua
 */
#include <iostream>
#include <cmath>

using namespace std;
int n;
int m;
int method;
double k, theta;
double x, y;
double rx,ry;
int l, r;
const int maxN = 1e5 + 10;
struct op
{
    double sumOfTheta, productOfK;
} ops[maxN];

int main()
{
#ifdef LOCAL
    freopen("change1.in", "r", stdin);
#endif
    cin >> n >> m;
    ops[0].productOfK = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> method;
        ops[i] = ops[i - 1];
        if (method == 1)
        {
            cin >> k;
            ops[i].productOfK *= k;
        }
        else if (method == 2)
        {
            cin >> theta;
            ops[i].sumOfTheta += theta;
        }
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> l >> r >> x >> y;

        double tmpK=ops[r].productOfK/ops[l-1].productOfK;
        double tmpTheta=ops[r].sumOfTheta-ops[l-1].sumOfTheta;
        rx=tmpK*((x*cos(tmpTheta))-y*sin(tmpTheta));
        ry=tmpK*(x*sin(tmpTheta)+y*cos(tmpTheta));
        printf("%.2lf %.2lf\n",rx,ry);
    }
}
