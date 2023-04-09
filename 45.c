//结构体

#include <stdio.h>

struct T
{
    double weight;
    short age;
};

struct S
{
    char c;
    int a;
    double d;
    char arr[20];
    struct T st;
};

int main()
{
    struct S s = {'c',100,3.14,"hello bit",{55.6,30}};
    printf("%c %d %lf %s \n %lf",s.c,s.a,s.d,s.arr,s.st.weight);
    return 0;
}