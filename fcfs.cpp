/*
#include<iostream>
using namespace std;
int main(int argc,char **argv){
	int n,bt[20],wt[20],tat[20],avwt=0,avtat=0,i,j;
	cout<<"Enter total number of Processes (Maximum 20) : ";
	cin>>n;
	cout<<"\nEnter Process Brust/Execution Time : \n";
	for(i=0;i<n;i++){
		cout<<"Process ["<<i+1<<"] :";
		cin>>bt[i];
	}
	
	wt[0]=0;
	for(i=1;i<n;i++){
		wt[i]=0;
		for(j=0;j<i;j++){
			wt[i]=wt[i]+bt[j];
		}
	}
	
	cout<<"\nProcess\t\tBrust Time\t\tWaiting Time\t\tTurnaround Time";
	for(i=0;i<n;i++){
		tat[i]=bt[i]+wt[i];
		cout<<"\nProcess ["<<i+1<<"]"<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t\t"<<tat[i];
	}
	
	for(i=0;i<n;i++){
		avwt=avwt+wt[i];
		avtat=avtat+tat[i];
	}
	
	avwt=avwt/n;
	avtat=avtat/n;
	
	cout<<"\n\nAverage Waiting Time : "<<avwt;
	cout<<"\nAverage Turnaround Time : "<<avtat;
	
	return 0;
}
*/
