#include<stdio.h>
int main()
{int n,i,j,s,w;
scanf("%d",&n);
for(i=0;i<n;i++)
{for(j=0;j<n-i-1;j++)
printf("  ");
for(s=0;s<i+1;s++)
printf(" *");
for(s=0;s<i;s++)
printf(" *");
printf("\n");
}
for(i=0;i<n-1;i++)
{for(j=0;j<i+1;j++)
printf("  ");
for(s=0;s<n-i-1;s++)
printf(" *");
for(s=0;s<n-i-2;s++)
printf(" *");
printf("\n");
}
return 0;
}
