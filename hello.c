#include <stdio.h>

int print_hello_world(void);
int adder(int,int);
int sub(int,int);

main()
{
    int a=4,b=5;
    print_hello_world();
    print("%d+%d=%d\n", a,b,adder(a,b));
    print("%d-%d=%d\n", b,a,sub(b,a));
}

int adder(int a, int b)
{
    return (a+b);
}

int sub(int a, int b)
{
  return (a-b);
}

int print_hello_world()
{
    printf("Hello World\n");
}

