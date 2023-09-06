
#include <stdio.h>

int sumtwo() // without argument with datatypes
{
    int c, d;
    printf("Number1 = ");
    scanf("%d", &c);
    printf("Number2 = ");
    scanf("%d", &d);
    return c + d;
}

int main()
{
    int ans;
    ans = sumtwo();
    printf("%d", ans);
    return 0;
}

