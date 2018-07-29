#include <iostream>
#include <queue>
using namespace std;
priority_queue<int, vector<int>, greater<int>> q;
int n;
int main()
{
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (q.size() != 1)
    {
        int h = 0;
        h += q.top();
        q.pop();
        h += q.top();
        q.pop();
        q.push(h);
        ans = h + ans;
    }
    cout << ans;
    return 0;
}