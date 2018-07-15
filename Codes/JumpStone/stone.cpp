#include <cstdio>
#include <iostream>

using namespace std;

int len,m,n;	//����,���յ�֮��ʯ��,���ߵ���ʯ��
int l,r,mid,ans;//l�Ƕ��ֵ�l len�Ǳ�������
int x[10031];

bool judge(int mid)
{
    int ans = 0;
    int start=-1,remain=m;			//start ��������ʼ��¼�������꣬remain=ʣ��ʯͷ 
    for(int i = 0; i < n; i++)
    {
		int gap;
		if(start == -1)
			gap = x[i];
		else
			gap = x[i] - x[start];
		if(gap < mid)
		{
			remain --;
			if(remain < 0)			//ʯͷû��
				return false;
		}
		return true;	
	}
}

int main()
{
	scanf("%d%d%d",&len,&n,&m);
	for(int i = 1; i <= n; i ++)
	{
        scanf("%d", &x[i]);
	}
    l = 0; r = len; mid = 0; ans = 0;
    while(l <= r)
	{
        mid = (l + r) / 2;
        if(judge(mid)) {ans = mid; l = mid+1;}
        else            r = mid-1;
    }
    printf("%d\n", ans);
    return 0;
}
