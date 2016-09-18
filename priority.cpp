/*
#include<iostream>
using namespace std;
int main(int argc,char **argv){
	int bt[20],wt[20],tat[20],pri[20],p[20],i,j,n,avwt=0,avtat=0,pos,temp;
	cout<<"Enter Total Number of Processes ( Maximum 20 ) : ";
	cin>>n;
	cout<<"\nEnter Process Brust/Execution Time & Priority : \n";
	for(i=0;i<n;i++){
		cout<<"Process ["<<i+1<<"] : ";
		cin>>bt[i];
		cout<<"Priority ["<<i+1<<"] : ";
		cin>>pri[i];
		p[i]=i+1;
	}
	
	for(i=0;i<n;i++){
		pos=i;
		for(j=i+1;j<n;j++){
			if(pri[j]<pri[pos]){
				pos=j;
			}
			
			temp=pri[i];
			pri[i]=pri[pos];
			pri[pos]=temp;
			
			temp=bt[i];
			bt[i]=bt[pos];
			bt[pos]=temp;
			
			temp=p[i];
			p[i]=p[pos];
			p[pos]=temp;
		}
	}
	
	wt[0]=0;
	
	for(i=1;i<n;i++){
		wt[i]=0;
		for(j=0;j<i;j++){
			wt[i]+=bt[j];
		}
	}
	
	for(i=0;i<n;i++){
		tat[i]=bt[i]+wt[i];
		avwt+=wt[i];
		avtat+=tat[i];
	}
	
	avwt=avwt/n;
	avtat=avtat/n;
	
	cout<<"\nProcess\t\tBrust Time\tPriority\tWaiting Time\tTurnaround Time";
	for(i=0;i<n;i++){
		cout<<"\nProcess ["<<p[i]<<"]"<<"\t\t"<<bt[i]<<"\t\t"<<pri[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];	
	}
	cout<<"\nAverage Brust Time : "<<avwt;
	cout<<"\nAverage Turnaround Time : "<<avtat;
	
	return 0;
}
*/
