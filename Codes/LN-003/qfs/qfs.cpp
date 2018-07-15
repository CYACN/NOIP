#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream> 
using namespace std;
	char encode[105], origin[105], decode[105]; //秘钥，(原）信息，公钥
	char letter[27] = {};
	
int main()
{
	freopen("spy.in", "r", stdin);
//	freopen("spy.out", "w", stdout);
	gets(encode);gets(origin);gets(decode);
	int lena = strlen(encode), lenb = strlen(origin), lenc = strlen(decode); //获取String加密原信息和公钥的长度，一样长可省略变量
	cout<<lenb<<endl;
	for (int i = 0; i<=lenb; i++)
		if (letter[encode[i] - 'A'] && letter[encode[i] - 'A'] != origin[i]) //错误情况：,密文同时对应多个字母
		{
			printf("1Failed");
			return 0;
		}
		else
		{
			letter[encode[i] - 'A'] = origin[i];
		}
	for (int i = 0; i < 26; i++) //错误情况：A~Z中有未出现的密字
		if (!letter[i])
		{
			printf("2Failed");
			return 0;
		}
	for (int i = 0; i<26; i++)
		for (int encode = i + 1; encode<26; encode++)
			if (letter[i] == letter[encode]) //不同的字母对应相同的密字
			{
				printf("3Failed");
				return 0;
			}
	char decry[105] = {};//把输出的结果清空
	for (int i = 0; i<lenc; i++)// 用一个for循环把decry组掏干净
		decry[i] = letter[decode[i] - 'A'];
	printf("%s", decry);//输出答案
	return 0;
}
