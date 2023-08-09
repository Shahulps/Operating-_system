#include<stdio.h>
#include<stdlib.h>
void main()
{
int max,head,i,j,q1[90],q2[90],q[90],temp1=0,temp2=0,temp=0,tep=0,tep1=0,total,n,diff;
printf("ENTER THE MAXIMUM RANGE OF THE DISK\n\n ");
scanf("%d",&max);
printf("ENTR THE INITIAL HEAD POSITION\n\n");
scanf("%d",&head);
printf("ENTER THE SIZE OF REQUEST QUEUE\n");
scanf("%d",&n);
printf("ENTER THE QUE DISK POSITIONS TO BE READ OR ENTER THE CYLINDERS TO BE SERVICED\n\n");
for(i=0;i<n;i++)
	{
	 scanf("%d",&temp);
	  if(temp>=head)
		{
		 q1[temp1]=temp;
		 temp1++;
		}
	  else
		{
		 q2[temp2]=temp;
		 temp2++;
		}
	}
for(i=0;i<temp1-1;i++)
	{
	 for(j=i+1;j<temp1;j++)
		{
		 if(q1[i]>q1[j])
			{
			 tep=q1[i];
			 q1[i]=q1[j];
			 q1[j]=tep;
			}
		}
	}
for(i=0;i<temp2-1;i++)
	{
	for(j=i+1;j<temp2;j++)
		{
		 if(q2[i]<q2[j])
			{

		 tep1=q2[i];
			q2[i]=q2[j];
			q2[j]=tep1;
			}
		}
	}
for(i=1,j=0;j<temp1;j++,i++)
	{
	 q[i]=q1[j];
	}
	q[i]=max;
for(i=temp1+2,j=0;j<temp2;j++,i++)
	{
	 q[i]=q2[j];
	}
	q[i]=0;
	q[0]=head;
	for(i=0;i<=n+1;i++)//i<=n+1 came because here an additional of last cylinder 200 had been occupied its position as q[i]=max
	{
	 diff=abs(q[i+1]-q[i]);
	 total+=diff;
	printf("DISK HEAD MOVES FROM %d to %d WITH A SEEK OF %d\n\n",q[i],q[i+1],diff);
	}
printf("TOTAL DISK MOVEMENT IS :%d\n",total);
}
