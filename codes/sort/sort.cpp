/*** 
 * @Author       : FeiYehua
 * @Date         : 2025-01-19 22:34:28
 * @LastEditTime : 2025-01-19 22:35:36
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : sort.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>
#include<algorithm>
using namespace std;
int a[4];
int main()
{
    for(int i=1;i<=3;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+4);
    for(int i=1;i<=3;i++)
    {
        cout<<a[i]<<" ";
    }
}