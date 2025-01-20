#include<iostream>

using namespace std;
int n;
int s;
const int maxN=1e5+10;
bool prime[maxN];
bool isPrime(int x)
{
    if(x<=1)
    {
        return 0;
    }
    if(x==2)
    {
        return 1;
    }
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}

void getPrime()
{
    int cur=0;//当前和
    int curNum=2;
    int cnt=0;
    while(cur<s)
    {
        if(curNum+cur<=s)
        {
            if(isPrime(curNum))
            {
                cur+=curNum;
                cout<<curNum<<endl;
                cnt++;
            }
        }
        else 
        {
            break;
        }
        curNum++;
    }
    cout<<cnt<<endl;
}
int main()
{
    cin>>s;
    getPrime();
}