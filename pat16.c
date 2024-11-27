#include<stdio.h>
int main()
{int n,i,j,s;
scanf("%d",&n);
for(i=0;i<n;i++)
{s=1;
for(j=0;j<i+1;j++)
{printf("%d ",s);
s++;}
printf("\n");
}
return 0;
}
