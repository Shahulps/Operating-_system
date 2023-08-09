#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,max,q[60],i,j,total=0,diff,head;
printf("ENTER THE MAX RANGE OF THE DISK CYLINDERS \n");
scanf("%d",&max);
printf("ENTER THE SIZE OF THE REQUEST QUEUE\n");
scanf("%d",&n);
printf("ENTER THE DISK POSITIONS OR CYLINDERS TO BE SERVICED\n");
for(i=1;i<=n;i++)
	{
		scanf("%d",&q[i]);
		}
printf("ENTER THE INITIAL HEAD POSTION");
scanf("%d",&head);
q[0]=head;
for(j=0;j<n;j++)
	{
	 diff=abs(q[j+1]-q[j]);
	 total+=diff;
	printf("DISK HEAD  MOVE FROM %d->->->%d WITH A SEEK %d\n",q[j],q[j+1],diff);
	}
printf("TOTAL SEEK TIME IS %d",total);
}
