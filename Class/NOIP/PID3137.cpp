#include <iostream>
#include <cstdio>
#include <stack>
#include <deque>
using namespace std;
//stack<int> st/k;
deque<int> deq;

void push(int ipt)
{
    deq.push_back(ipt);
}

void pull()
{
    deq.pop_back();
}
int main()
{
    int n;
    int status;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        status = 0;
        cin >> status; //第一个状态判别式
        if (status == 1)
        {
            int ipt = 0;
            cin >> ipt;
            push(ipt);
        }
        if (status == 2)
        {
            pull();
        }
    }
    if (deq.empty())
        cout << "impossible!" << endl;
    else
    {
        cout << deq.back() << endl;
    }
    return 0;
}
