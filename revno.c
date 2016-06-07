#include <stdio.h>

int main()

{
    int a,b,c,d,n;
    printf("Enter N:");
    scanf("%d",&n);
    a=n%10;
    b=n/10;
    c=b%10;
    d=b/10;                                                                                                                                              
    printf("%d%d%d",a,c,d);

    return 0;
}
