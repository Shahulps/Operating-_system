#include<stdio.h>
#include<unistd.h>
void main()
{
int at[90],bt[90],wt[90],n,i,pid[90],ct[90];
printf("enter the no of processes \n\n");
scanf("%d",&n);
printf(" enter the pid, burst time and arrival time of the corresponding processes\n");
printf("PID\t|ARRIVAL TIME\t|BURST TIME|\n");
for(i=0;i<n;i++)
	{
	 scanf("\t\t%d\t\t",&pid[i]); 
	scanf("\t\t%d\t\t",&at[i]);
	scanf("\t\t%d",&bt[i]);
	}
for(i=0;i<n;i++)
	{
	for(int j=i+1;j<n;j++)
		{
			if(at[i]>at[j])
			{
		  	int temp=at[i];
			     at[i]=at[j];
			     at[j]=temp;
			int temp1=bt[i];
			    bt[i]=bt[j];
			    bt[j]=temp1;
			int temp2=pid[i];
			   pid[i]=pid[j];
			   pid[j]=temp2;
			}
		}
	}
int sum=at[0];
int tat[90];
int add=0,wtadd=0;
	for(i=0;i<n;i++)
		{
		 sum=sum+bt[i];
		 ct[i]=sum;

		}
	 for(i=0;i<n;i++)
		{
		 tat[i]=ct[i]-at[i];
		 add=add+tat[i];
		}
	  for(i=0;i<n;i++)
		{
		 wt[i]=tat[i]-bt[i];
		 wtadd=wtadd+wt[i];
		}
	 int avgtat=add/n;
	 int avgwt=wtadd/n;
	 printf("PROCESSING COMPLETED >>>>>>>>>>>\n");
	 printf("|PID\t|ARRTME\t|BRTTME\t|CMPTME\t|TATTME\t|WTGTME\t|\n");
	 printf("______________________________________________________\n");
	 for(i=0;i<n;i++)
		{
		 printf("|%d\t|%d\t|%d\t|%d\t|%d\t|%d\t|\n",pid[i],at[i],bt[i],ct[i],tat[i],wt[i]);
		 printf("_______________________________\n");
		}
	printf("AVERAGE WAITING TIME IS %d\n\nAVERAGE TURNARNDTIME IS %d\n",avgwt,avgtat);
}
