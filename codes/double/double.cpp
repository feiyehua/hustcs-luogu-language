/*** 
 * @Author       : FeiYehua
 * @Date         : 2025-01-19 22:39:14
 * @LastEditTime : 2025-01-19 22:45:02
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : double.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>
using namespace std;
int x;
int cnt;

int main()
{
    cin>>x;
    // x*=2;
    while(x>1)
    {
        x/=2;
        cnt++;
    }
    cout<<cnt+1;
}