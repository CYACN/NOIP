#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;
int ct;
map<int,int>hi;
int main()
{
    int all[10009];
    int n,t;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >>t;
        if(hi[t]==0)
        {
            hi[t]++;
            ct++;
            all[ct]=t;
        }
    }

    sort(all+1,all+ct+1);
    for (int i=1;i<=ct;i++)
    {
        cout << all[i] << hi[all[i]] << endl;
    }
    return 0;
}
