//结构体的内存对齐就是用空间换时间     保证读取时间，牺牲一定的内存空间
//改默认对齐数

#include <stdio.h>
#pragma pack(4)
struct S
{
    char c;
    double d;
};
#pragma pack()
//取消设置的默认对齐位数

int main()
{
    struct S s = {0};
    printf("%d\n",sizeof(s));
}