
#include <stdio.h>
int main( void )

{
    int a, b, c, e;
    printf("enter the first value;");
    scanf("%d", &a);
    printf("enter the second value;");
    scanf("%d", &b);
    printf("enter the third value;");
    scanf("%d", &c);
    e = a + b + c;
    printf("%d + %d + %d = %d\n", a, b, c, e);
    return 0;
}
