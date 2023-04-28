#include<stdio.h>
int main(){
	int pid[15],bt[15],n;
	printf("Enter the  number of processes:");
	scanf("%d",&n);
	printf("Enter ID's of each process:");
	for(int i=0;i<=n;i++){
		scanf("%d",&pid[i]);
	}
	printf("Enter the burst time:");
	for(int i=0;i<=n;i++){
		scanf("%d",&bt[i]);
	}
	int wt[n],i;
	wt[0]=0;
	for(int i=1;i<=n;i++){
		wt[i]=bt[i-1]+wt[i-1];
	}
	printf("Process ID   Burst Time Waiting Time Turnaround Time\n");
	float twt=0.0,ttat=0.0;
	for(i=0;i<=n;i++){
		printf("%d\t\t",pid[i]);
		printf("%d\t\t",bt[i]);
		printf("%d\t\t",wt[i]);
		printf("%d\t\t",bt[i]+wt[i]);
		printf("\n");
		twt += wt[i];
		ttat += (wt[i]+bt[i]);
	}
	float att,awt;
	awt=twt/n;
	att=ttat/n;
	printf("Average Waiting time =%d:\n",awt);
	printf("Average Turnaround time = %d:\n",att);
}
