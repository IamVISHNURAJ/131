#include<stdio.h>
main()
{
int n, c = 2;
scanf("%d",&n);
for (c=2;c<=n-1;c++)
{
if (n%c==0)
{
printf("no",);
break;
}
}
if (c==n)
printf("yes",);
return 0;
}
