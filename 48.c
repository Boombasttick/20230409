//offsetof宏的实现
#include <stddef.h>
#include <stdio.h>

struct S
{
    char c;
    double d;
};

int main()
{
    struct S s = {0};
    printf("%d\n",sizeof(s));
    printf("%d\n",offsetof(struct S,c));
    printf("%d\n",offsetof(struct S,d));
}