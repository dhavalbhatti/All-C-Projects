
#include <stdio.h>

int sumtwo(int c, int d) // with argument with return types
{
    
    printf("Number1 = ");
    scanf("%d", &c);
    printf("Number2 = ");
    scanf("%d", &d);
    return c + d;
}

int main()
{
    int ans,c,d;
    ans = sumtwo(c,d);
    printf("%d", ans);
    return 0;
}

