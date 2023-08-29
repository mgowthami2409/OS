#include<stdio.h>
int main()
{
	int i,n,bt[20],wt[20],tat[20];
	float wtavg,tatavg;
	printf("Enter the number of processes:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		printf("Enter Burst time of process%d--",i+1);
		scanf("%d",&bt[i]);
	}
	wt[0]=wtavg=0;
	tat[0]=tatavg=bt[0];
	for(i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
		tat[i]=wt[i]+bt[i];
		wtavg=wtavg+wt[i];
		tatavg=tatavg+tat[i];
	}
	printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
	}
	printf("Average Waiting Time--%f\n",wtavg/n);
	printf("Average Turnaround Time--%f\n",tatavg/n);
}
