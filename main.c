#include <stdio.h>
#include <stdlib.h>

/*该程序的功能是：
输入字母，小写转大写，大写转小写，
剔除数字，并统计字母的数量*/

int main()
{
    char ch;int i=0;
    printf("请输入字符串,并以#结束：\n");
    for(ch=getchar();ch!='#';ch=getchar())//自动读取下一个字符串中的字符
    {
        if(ch=='!'){
            return 0; //输入感叹号“！”结束程序
        }
        else{
            if(ch>='A'&&ch<='Z'){
                ch+=32;
                putchar(ch);i++;
                }
                else
                    if(ch>='a'&&ch<='z'){
                        ch-=32;
                        putchar(ch);i++;
                        }
        }
    }//for循环结束

        printf("\n此字符串有%d个字母\n",i);
        printf("************************************\n\n");

    return main();//递归
}
