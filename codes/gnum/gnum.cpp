/*** 
 * @Author       : FeiYehua
 * @Date         : 2025-01-19 22:30:04
 * @LastEditTime : 2025-01-19 22:30:04
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : gnum.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>
using namespace std;
int x;
bool is1(int x)
{
    return x%2==0;
}
bool is2(int x)
{
    return (x>4)&&x<=12;
}
int main()
{
    cin>>x;
    cout<<(is1(x)&&is2(x))<<" ";
    cout<<(is1(x)||is2(x))<<" ";
    cout<<(is1(x)^is2(x))<<" ";
    cout<<((!is1(x))&&(!is2(x)))<<" ";

}