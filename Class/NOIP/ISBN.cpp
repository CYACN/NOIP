#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[]) //加的神秘参数,，那个*是cpp指针
{
    char chA[9982], chB[10031], chVeriCode1, chVeriCode2; //misakamikoto
    int iVeriCode22 = 0;
    freopen("isbn.in", "r", stdin);
    freopen("isbn.out", "w", stdout);
    scanf("%c-%c%c%c-%c%c%c%c%c-%c", &chA[1], &chA[2], &chA[3], &chA[4], &chA[5], &chA[6], &chA[7], &chA[8], &chA[9], &chVeriCode1); //收录图书有用的条码

    for (int i = 1; i <= 9; ++i)
    {
        iVeriCode22 += (chA[i] - '0') * i; //膜蛤求和
    }

    chVeriCode2 = iVeriCode22 % 11 + '0'; //ISBN--------------------Lst

    if (chVeriCode2 == '0' + 10) //真正的大佬都是这么写233
    {
        chVeriCode2 = 'X'; //忘了 10 = X 了
    }
    
    if (chVeriCode1 == chVeriCode2)
    {
        cout << "Right";
        return 0;
    }//忘括括号了，啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊!
    cout << chA[1] << '-' << chA[2] << chA[3] << chA[4] << '-' << chA[5] << chA[6] << chA[7] << chA[8] << chA[9] << '-' << chVeriCode2; //前面条码不用动
    return 0;
}
//VS Code 自动排版真好用^K+^F ^_^