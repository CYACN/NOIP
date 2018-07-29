#include <stack>
#include <iostream>
#include <cstring>
using namespace std;

stack<char> kh;
bool flag;
char all[2000001];
int T, n;

int main()
{
	cin >> T;
	while (T--)
	{
		flag = 0;
		memset(all, 0, sizeof(all));
		while (!kh.empty())
			kh.pop();
		cin >> all;
		n = strlen(all);

		for (int i = 0; i < n; i++)
		{
			if (all[i] == '(' || all[i] == '[' || all[i] == '{' || all[i] == '<')
			{
				kh.push(all[i]);
			}
			else
			{
				if (kh.empty())
				{
					flag = 1;
					break;
				}
				else if (kh.top() == '(' && all[i] == ')')
				{
					kh.pop();
				}
				else if (kh.top() == '[' && all[i] == ']')
				{
					kh.pop();
				}
				else if (kh.top() == '{' && all[i] == '}')
				{
					kh.pop();
				}
				else if (kh.top() == '<' && all[i] == '>')
				{
					kh.pop();
				}
				else
				{
					flag = 1;
					break;
				}
			}
		}
		if (!kh.empty())
		{
			flag = 1;
		}
		if (flag == 1)
		{
			cout << "FALSE" << endl;
		}
		else
		{
			cout << "TRUE" << endl;
		}
	}

	return 0;
}
