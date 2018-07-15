#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int n, a, b, t[500001];
	long long int l, r;			//���¹�long�ˣ���WA�����������

	freopen("qfs.in", "r", stdin);
	freopen("qfs.out", "w", stdout);

	scanf("%d %d %d", &n, &a, &b);

	l = 0;
	r = 0;

	for (int i = 0; i<n; i++)
	{
		scanf("%d", &t[i]);
		r += t[i];		//��껫hpssʱ�����
	}

	long long mid;

	while (l <= r)
	{
		int h = 0;
		mid = (l + r) / 2;		//��ʽ����,��BUG

		for (int i = 0; i < n; i++)
		{
			if (t[i] - a * mid > 0)			
			{
				h += (t[i] - a * mid) % b == 0 ? (t[i] - a * mid) / b : (t[i] - a * mid) / b + 1;
			}
		}

		if (h <= mid)			//����Ӧ��û����ѭ��
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}

	printf("%lld", l);
	return 0;
}
