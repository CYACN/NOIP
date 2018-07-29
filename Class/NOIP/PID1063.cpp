#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
queue<int> num;
int main(int argc, char const *argv[])
{
    int kind;
    int ipt;
    cin >> kind;
    for (int i = 1; i <= kind; i++)
    {
        cin >> ipt;
        num.push(ipt);
    }

    return 0;
}