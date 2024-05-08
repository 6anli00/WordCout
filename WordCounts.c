#include <stdio.h>
int main()
{
    char c;  \\定义字符串
    int letters=0, ret=1;  \\定义初始单词数量
    while ((c=getchar())!=EOF)  \\运用循环语句读到文件结尾截止
    {
    if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z') \\大写字母和小写字母出现时首次记录一个单词数
        if(ret==1){
            letters++;
            ret=0;
        }
  else
    ret=1;    \\其他字符出现时更改ret的值
 }
    printf("单词数量为：")
    printf("%d",letters);
    return 0;
}
