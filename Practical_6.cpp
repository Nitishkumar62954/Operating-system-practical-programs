#include<iostream>usingnamespacestd;

//Functiontofindthewaitingtimeforall
//processes
voidfindWaitingTime(intprocesses[],intn,
intbt[],intwt[],intat[])
{
// waiting time for first process is 0wt[0] =0;

//calculatingwaitingtimefor(inti=1; i<n ;i++)
wt[i]=bt[i-1]+wt[i-1]-at[i] ;
}

//Functiontocalculateturnaroundtime
void findTurnAroundTime( int processes[], int n,intbt[],int wt[], inttat[],int at[])
{
//calculatingturnaroundtimeby
//bt[i]-at[i]
for (inti = 0; i < n ; i++)tat[i]=bt[i]+wt[i]-at[i];
}

//Functiontocalculateaveragetime
voidfindavgTime(intprocesses[],intn,intbt[],intat[])
{
intwt[n],tat[n],total_wt=0,total_tat=0;

//arrangingplacesaccordingtothearrival_timefor(inti=0;i<n-1;i++)
{
for(intj=0;j<n+1;j++)
{
if(at[j]>at[j+1])
 
{
int t=0;t=at[j];at[j]=at[j+1];at[j+1]=t;

t=processes[j];processes[j]=processes[j+1];processes[j+1]=t;

t=bt[j];bt[j]=bt[j+1];bt[j+1]=t;
}
}
}

//FunctiontofindwaitingtimeofallprocessesfindWaitingTime(processes,n,bt,wt,at);

//FunctiontofindturnaroundtimeforallprocessesfindTurnAroundTime(processes,n,bt,wt,tat,at);

//Displayprocessesalongwith alldetails
cout<<"Processes"<<"Arrivaltime"<<"Bursttime"
<< "Waitingtime"<< "Turnaroundtime\n";

//Calculatetotalwaitingtimeandtotalturn
//aroundtime
for(int  i=0;i<n;i++)
{
total_wt = total_wt + wt[i];total_tat=total_tat+tat[i];
cout<<""<<processes[i]<<"\t\t"<<at[i]<<"\t\t"<< bt[i]<<"\t	"
<<wt[i]<<"\t\t"<<tat[i]<<endl;
}

cout<<"Averagewaitingtime ="
<<(float)total_wt/(float)n;
cout<<"\nAverageturnaroundtime= "
<<(float)total_tat/(float)n;
}

//Driver code
 
intmain()
{
intn;
cout<<"enter no of process u want :-";cin>>n;
int processes[n];int burst_time[n];int arrival_time[n];for(inti=0;i<n;i++){
processes[i]=i+1;	//processid's
cout<<"EnterBurst_timeofprocessno"<<i+1<<":";	//burst_timecin>>burst_time[i];
cout<<"EnterArrival_timeofprocessno"<<i+1<<":";//arrival_timecin>>arrival_time[i];
}


findavgTime(processes, n,burst_time,arrival_time);return0;
}

