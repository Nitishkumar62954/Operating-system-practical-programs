#include<iostream>usingnamespacestd;
intct=0,i=0,wp[25]={0},comp[25];
voidfindTurnAroundTime(inti,intat[],inttat[],intqt)
{
//calculatingturnaroundtimeby
//completeat-startat

tat[i] = qt-at[i];comp[i]=qt;
//cout<<"\nct"<<comp[i]<<"	3";
}
voidfindWaitingTime(inttat[],intn,intbt[],intwt[])
{//calculatingwaitingtimeby
//turnaroundtime-burstbtimefor(int i=0;i<n;i++)
{
wt[i]=tat[i]-bt[i];
}
}
voidwaitingQueue(intdup_bt[],intn,intprocesses[],intat[],inttat[])
{
for(inti=0;i<n;i++)
{
 


int j=0;j=ct;
 
if(dup_bt[i]!=0)
{


ct=ct+dup_bt[i];dup_bt[i]=0;
findTurnAroundTime(i,at,tat,ct);
cout<<"\n~~~~~~\n";cout<<j<<"|"<<"P"<<processes[i]<<"|"<<ct
 
<<"\n";//<<"\t"<<at[j]<<"\t"<<quantum1<<"\n";cout<<"~~~~~~";
}
 
}

}
voidReadyQueue(intprocesses[],intbt[],intat[],intn,intpri[])
{
intdup_bt[n],tat[n],wt[n];
//arrangingplacesaccordingtothePRIORITYfor(inti=0;i<n-1;i++)
{
for(intj=0;j<n-1;j++)
{
if(pri[j]<pri[j+1])
{
int t=0;t=at[j];at[j]=at[j+1];at[j+1]=t;

t=processes[j];processes[j]=processes[j+1];processes[j+1]=t;

t=bt[j];bt[j]=bt[j+1];bt[j+1]=t;

t=pri[j];pri[j]=pri[j+1];pri[j+1]=t;
}
elseif(pri[j]==pri[j+1]&&at[j]>at[j+1])
{
intt=0;
t=at[j];at[j]=at[j+1];at[j+1]=t;

t=processes[j];processes[j]=processes[j+1];processes[j+1]=t;

t=bt[j];bt[j]=bt[j+1];bt[j+1]=t;
 

t=pri[j];pri[j]=pri[j+1];pri[j+1]=t;
}
}
}
//show
cout<<"\nProcesses"<<"Arrivaltime	"<< " Burst time"<<"Priotrity\n";for(int  i=0;i<n;i++)
{

cout<<""<<processes[i]<<"\t\t"<<at[i]<<"\t\t"<<bt[i]<<"\t	"
<<pri[i]<<"\t	"<<endl;
}

for (int i = 0 ; i < n ; i++)dup_bt[i] =bt[i];
for(inti=0;i<n;i++)
{
for(intj=0;j<n;j++)
{
if(dup_bt[j]!=0)
{
if(ct==at[j]||ct>at[j])
{
 

l=ct;
 
intl=0;

ct=ct+dup_bt[j];
dup_bt[j]=0;findTurnAroundTime(j,at,tat,ct);
 

cout<<"\n~~~~~~\n";
cout<<l<<"|"<<"P"<<processes[j]<<"|"<<ct
<<"\n";//<<"\t"<<at[j]<<"\t"<<quantum1<<"\n";
cout<<"~~~~~~";j=n;
//cout<<"\n	5";
}

}

}
 
}
waitingQueue(dup_bt,n,processes,at,tat);findWaitingTime(tat,n,bt,wt);
cout<<"\nProcesses"<<"Bursttime"<<"\tArrivaltime"<<"turnaroundTime"<<"
ComplitionTime"
<<"waitingTime"<<"\n";

for(int i= 0;i<n ;i++)
cout<<processes[i]<<"\t\t"<<bt[i]<<"\t\t"<<at[i]<<"\t\t"<<tat[i]<<"\t\t"
<<comp[i]<<"\t\t"<<wt[i]<<"\n";

}
//main codeintmain()
{
intn;
cout<<"enter no of process u want :-";cin>>n;
int processes[n];int burst_time[n];int arrival_time[n];intpriority[n];

for(inti=0;i<n;i++){
processes[i]=i+1;	//processid's
cout<<"EnterBurst_timeofprocessno"<<i+1<<":";	//burst_timecin>>burst_time[i];
cout<<"Enter Arrival_time of process no"<<i+1<<" :";cin>>arrival_time[i];
cout<<"EnterPriorityofprocessno"<<i+1<<":";cin>>priority[i];
}
cout<<"input:-\n";
cout<< "Processes"<<"Arrivaltime	"<< " Burst time"<<"Priotrity\n";for(int  i=0;i<n;i++)
{

cout<<""<<processes[i]<<"\t\t"<<arrival_time[i]<<"\t\t"<<burst_time[i]<<"\t	"
<<priority[i]<<"\t	"<<endl;
}
ReadyQueue(processes,burst_time,arrival_time,n,priority); return(0);
}

