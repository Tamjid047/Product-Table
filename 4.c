#include <stdio.h>
int main(void)
{
    //ANSI C
    //PAGE 21
    //Q-1.6
    int a;
    int s;
    int p;

    s=0;
    printf("enter number to find product table=");
    scanf("%d",&a);
    for (s=1;s<11;s=s+1)
    {
        p=a*s;
        printf("%d*%d=%d\n",a,s,p);
    }

   // return 0;
}
