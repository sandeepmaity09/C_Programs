/*
#include<iostream>
using namespace std;
int main(int argc,char **argv){
	int n,bt[20],wt[20],tat[20],i,j,avwt=0,avtat=0,temp;
	cout<<"Enter Total Number of Processes ( Maximum 20 ) : ";
	cin>>n;
	cout<<"Enter Process Brust/Execution Time : \n";
	for(i=0;i<n;i++){
		cout<<"Process ["<<i+1<<"] : ";
		cin>>bt[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(bt[j]>bt[j+1]){
				temp=bt[j];
				bt[j]=bt[j+1];
				bt[j+1]=temp;
			}
		}
	}
	
	wt[0]=0;
	
	for(i=1;i<n;i++){
		wt[i]=0;
		for(j=0;j<i;j++){
			wt[i]=wt[i]+bt[j];
		}
	}
	
	for(i=0;i<n;i++){
		tat[i]=wt[i]+bt[i];
		avwt=avwt+wt[i];
		avtat=avtat+tat[i];
	}
	
	avwt=avwt/n;
	avtat=avtat/n;
	
	cout<<"\nProcess \tBrust Time\tWaiting Time\tTurnaround Time";
	for(i=0;i<n;i++){
		cout<<"\nProcess ["<<i+1<<"]\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
	}
	
	cout<<"\nAverage Waiting Time : "<<avwt;
	cout<<"\nAverage Turnaround Time : "<<avtat;
	
	return 0;
}
*/
