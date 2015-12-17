#include <stdio.h>

int print_hello_world(void);
int adder(int,int);

main()
{
    print_hello_world();
    adder(4,5);
}

int adder(int a, int b)
{
    return (a+b);
}
int print_hello_world()
{
    printf("Hello World\n");
}

