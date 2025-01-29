/*** 
 * @Author       : FeiYehua
 * @Date         : 2025-01-28 14:28:58
 * @LastEditTime : 2025-01-29 10:30:05
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : output.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>
#include<stack>
using namespace std;
unsigned int n;
const unsigned int b[20]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768};
string s[100]={"2(0)","2","2(2)","2(2+2(0))","2(2(2))","2(2(2)+2(0))","2(2(2)+2)","2(2(2)+2+2(0))","2(2(2+2(0)))","2(2(2+2(0))+2(0))","2(2(2+2(0))+2)","2(2(2+2(0))+2+2(0))","2(2(2+2(0))+2(2))","2(2(2+2(0))+2(2)+2(0))","2(2(2+2(0))+2(2)+2)"};
stack<int> a;
int main()
{
#ifdef LOCAL
    freopen("ans.out","w",stdout);
    freopen("output1.in","r",stdin);
#endif
    cin>>n;
    for(int i=0;i<=14;i++)
    {
        if(n&b[i])
        {
            a.push(i);
        }
    }
    while(a.size()>1)
    {
        cout<<s[a.top()]<<"+";
        a.pop();
    }
    cout<<s[a.top()]<<endl;
}
