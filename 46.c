//计算struct大小

#include <stdio.h>
struct S1
{
    char c1;
    int a;
    char c2;
};

struct S2
{
    char c1;
    char c2;
    int a;
};

int main()
{
    struct S1 s1 = {0};
    struct S2 s2 = {0};
    printf("%d\n%d",sizeof(s1),sizeof(s2));
    return 0;
}