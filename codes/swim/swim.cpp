/*** 
 * @Author       : FeiYehua
 * @Date         : 2025-01-19 22:23:39
 * @LastEditTime : 2025-01-19 22:23:41
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : swim.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>
using namespace std;
double target;
double cur;
double l=2.0l;
int cnt;

int main()
{
    cin>>target;
    while(cur<target)
    {
        cnt++;
        cur+=l;
        l*=0.98l;
    }
    cout<<cnt;
    return 0;
}