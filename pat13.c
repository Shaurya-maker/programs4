#include<stdio.h>
int main()
{int n,i,j,s,k;
scanf("%d",&n);
for(i=0;i<n;i++)
{for(j=0;j<i;j++)
printf("* ");
for(s=0;s<n-i-1;s++)
printf("  ");
for(s=0;s<n-i;s++)
printf("  ");
for(k=0;k<i;k++)
printf("\n");
}
return 0;
}
