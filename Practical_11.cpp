#include<iostream>usingnamespacestd;
//Functiontofindthewaitingtimeforall
//processes
voidfindWaitingTime(intprocesses[],intn,
intbt[],intwt[],intat[])
{
// waiting time for first process is 0wt[0] =0;
intct=0+bt[0];

//calculatingwaitingtimefor(inti=1;i<n;i++){

wt[i] =ct-at[i] ;
ct=ct+bt[i];}
}

//Functiontocalculateturnaroundtime
void findTurnAroundTime( int processes[], int n,intbt[],int wt[], inttat[],int at[])
{
intct=0;//Completion_time
//calculatingturnaroundtimeby
// completion time - arrival timefor(inti=0; i<n;i++){
ct=ct+bt[i];tat[i]=ct-at[i];
}
}


//Functiontocalculateaveragetime
voidfindavgTime(intprocesses[],intn,intbt[],intat[])
 
{
intwt[n],tat[n],total_wt=0,total_tat=0,t=0;


//arranging places according to the Burst_timefor(inti=0;i<n+1;i++)
{
for(intj=0;j<n-1;j++)
{
if(bt[j]>bt[j+1])
{

t=bt[j];bt[j]=bt[j+1];bt[j+1]=t;


t=processes[j];processes[j]=processes[j+1];processes[j+1]=t;

t=at[j];at[j]=at[j+1];at[j+1]=t;
}

}

for(intj=0;j<n-1;j++)
{
if(j!=0&&at[j]==0&&at[j-1]!=0)
{

t=bt[j];bt[j]=bt[j-1];bt[j-1]=t;


t=processes[j];processes[j]=processes[j-1];processes[j-1]=t;

t=at[j];at[j]=at[j-1];
 
at[j-1]=t;
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




// Driver codeintmain()
{
intn;
cout<<"enter no of process u want :-";cin>>n;
 
int processes[n];int burst_time[n];int arrival_time[n];for(inti=0;i<n;i++){
processes[i]=i+1;	//processid's
cout<<"EnterBurst_timeofprocessno"<<i+1<<":";	//burst_timecin>>burst_time[i];
cout<<"Enter Arrival_time of process no"<<i+1<<" :" ;//arrival_timecin>>arrival_time[i];
}
cout<<"input:-\n";
cout << "Processes"<<"Arrival time"<< " Burst time\n";for(int  i=0;i<n;i++)
{

cout<<""<<processes[i]<<"\t\t"<<arrival_time[i]<<"\t\t"<<burst_time[i]<<"\t	"
<<endl;
}



findavgTime(processes, n,burst_time,arrival_time);return0;
}


