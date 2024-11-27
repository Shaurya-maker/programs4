#include<stdio.h>
int main()
{int n,i,j,s;
scanf("%d",&n);
s=1;
for(i=0;i<n;i++)
{for(j=0;j<i+1;j++)
printf("%d ",s);
s++;
printf("\n");
}
return 0;
}
