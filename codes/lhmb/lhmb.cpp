#include <iostream>
#include <queue>
#include<functional>
using namespace std;
int n;
int k, t;
priority_queue<int, vector<int>,greater<int>> a;

int main()
{
#ifdef LOCAL
    freopen("lhmb2.in", "r", stdin);
#endif
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        a.push(t);
    }
    for (int i = 1; i < k; i++)
    {
        if (a.empty())
        {
            cout << "NO RESULT" << endl;
            return 0;
        }
        else
        {
            int tmp = a.top();
            while (!a.empty() && a.top() == tmp)
            {
                a.pop();
            }
        }
    }
    if (a.empty())
    {
        cout << "NO RESULT" << endl;
        return 0;
    }
    else 
    {
        cout<<a.top();
    }
}
