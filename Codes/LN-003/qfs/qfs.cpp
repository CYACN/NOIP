#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream> 
using namespace std;
	char encode[105], origin[105], decode[105]; //��Կ��(ԭ����Ϣ����Կ
	char letter[27] = {};
	
int main()
{
	freopen("spy.in", "r", stdin);
//	freopen("spy.out", "w", stdout);
	gets(encode);gets(origin);gets(decode);
	int lena = strlen(encode), lenb = strlen(origin), lenc = strlen(decode); //��ȡString����ԭ��Ϣ�͹�Կ�ĳ��ȣ�һ������ʡ�Ա���
	cout<<lenb<<endl;
	for (int i = 0; i<=lenb; i++)
		if (letter[encode[i] - 'A'] && letter[encode[i] - 'A'] != origin[i]) //���������,����ͬʱ��Ӧ�����ĸ
		{
			printf("1Failed");
			return 0;
		}
		else
		{
			letter[encode[i] - 'A'] = origin[i];
		}
	for (int i = 0; i < 26; i++) //���������A~Z����δ���ֵ�����
		if (!letter[i])
		{
			printf("2Failed");
			return 0;
		}
	for (int i = 0; i<26; i++)
		for (int encode = i + 1; encode<26; encode++)
			if (letter[i] == letter[encode]) //��ͬ����ĸ��Ӧ��ͬ������
			{
				printf("3Failed");
				return 0;
			}
	char decry[105] = {};//������Ľ�����
	for (int i = 0; i<lenc; i++)// ��һ��forѭ����decry���͸ɾ�
		decry[i] = letter[decode[i] - 'A'];
	printf("%s", decry);//�����
	return 0;
}
