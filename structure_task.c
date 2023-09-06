#include <stdio.h>
#include <string.h>

struct tabletop
{
    char srno[20];
    char name[20];
    char sub1[20];
    char sub2[20];
    char sub3[20];
    char total[20];
    char per[20];
} s1;

struct tabledata
{
    int num;
    char name[20];
    int mark1;
    int mark2;
    int mark3;
    int total;
    float per;
} d1, d2;

int main()
{
    struct tabletop s1 = {"Sr NO", "Name", "Maths", "Science", "English", "Total", "Percentage"};

    d1.num = 1;
    printf("Enter name and marks of student1: ");
    scanf("%s", &d1.name);
    scanf("%d", &d1.mark1);
    scanf("%d", &d1.mark2);
    scanf("%d", &d1.mark3);
    d1.total = d1.mark1 + d1.mark2 + d1.mark3;
    d1.per = d1.total / 3;

    d2.num = 2;
    printf("Enter name and marks of student2: ");
    scanf("%s", &d2.name);
    scanf("%d", &d2.mark1);
    scanf("%d", &d2.mark2);
    scanf("%d", &d2.mark3);
    d2.total = d2.mark1 + d2.mark2 + d2.mark3;
    d2.per = d2.total / 3;

    printf("%s \t %s \t\t %s \t %s \t %s \t %s \t %s \n", s1.srno, s1.name, s1.sub1, s1.sub2, s1.sub3, s1.total, s1.per);
    printf("----------------------------------------------------------------------------- \n");
    printf("%d \t %s \t %d \t %d \t %d \t %d \t %.2f \n", d1.num, d1.name, d1.mark1, d1.mark2, d1.mark3, d1.total, d1.per);
    printf("%d \t %s \t %d \t %d \t %d \t %d \t %.2f \n", d2.num, d2.name, d2.mark1, d2.mark2, d2.mark3, d2.total, d2.per);

    return 0;
}
