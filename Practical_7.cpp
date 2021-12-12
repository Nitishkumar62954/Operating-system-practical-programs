#include<iostream>usingnamespacestd;

//Function tofind thewaiting timeforall
//processes
voidfindWaitingTime(intprocesses[],intn,intbt[],intwt[],intquantum)
{
//Makeacopy ofbursttimes bt[]to store remaining
// burst times.intrem_bt[n];
for (int i = 0 ; i < n ; i++)rem_bt[i]=bt[i];

int t = 0;


//Keeptraversingprocessesinroundrobinmanner
// until all of them are not done.while(1)
{
booldone =true;
// Traverse all processes one by onefor(int i =0 ; i <n; i++)
{
//Ifbursttime ofaprocess isgreaterthan0
 
//thenonlyneedtoprocessfurtherif(rem_bt[i]>0)
{
done=false;


if(rem_bt[i]> quantum)
{
//Increasethevalueofti.e. shows
//howmuchtimeaprocesshasbeenprocessedt +=quantum;

//Decreasetheburst_timeofcurrentprocess
// by quantumrem_bt[i]-=quantum;
}


//Ifbursttime issmallerthan orequalto
//quantum.Lastcycleforthisprocesselse
{
//Increasethevalueofti.e. shows
//howmuchtimeaprocesshasbeenprocessedt = t +rem_bt[i];

//Waitingtimeiscurrenttimeminustime
//usedbythisprocesswt[i]=t -bt[i];
 
//Astheprocessgets fullyexecuted
// make its remaining burst time = 0rem_bt[i]=0;
}
}
}




if(done==true)break;
}
}


voidfindTurnAroundTime(intprocesses[],intn,
intbt[],intwt[],inttat[])
{


for (int i = 0; i < n ; i++)tat[i]=bt[i] + wt[i];
}


//Functiontocalculate averagetime
voidfindavgTime(intprocesses[], intn, intbt[],
intquantum)
{
intwt[n],tat[n], total_wt=0,total_tat =0;


//Functiontofindwaitingtimeofallprocesses
 
findWaitingTime(processes,n,bt,wt,quantum);


//FunctiontofindturnaroundtimeforallprocessesfindTurnAroundTime(processes,n,bt, wt,tat);



cout<<"Processes "<< " Burst time "
<<" Waiting time"<<" Turn aroundtime\n";


//Calculatetotalwaiting timeandtotalturn
//aroundtime
for(inti=0;i<n; i++)
{
total_wt=total_wt+wt[i];total_tat=total_tat+tat[i];
cout<<" "<<i+1 <<"\t\t"<<bt[i] <<"\t "
<<wt[i] <<"\t\t"<<tat[i] <<endl;
}


cout <<"Averagewaiting time="
<<(float)total_wt/(float)n;
cout<<"\nAverageturn aroundtime="
<<(float)total_tat/(float)n;
}




intmain()
{
 


int n;
cout<<"enterthenumberofpreocesses"<<endl;cin>>n;
intprocesses[n];
cout<<"entertheprocesses"<<endl;for(inti=0;i<n;i++)
{
cin>>processes[i];
}


cout<<"enterbursttime"<<endl;intburst_time[n];
for(inti=0;i<n;i++)
{
cin>>burst_time[i];
}



// Time quantumintquantum ;
cout<<"enterthevalueofquantumtime"<<endl;cin>>quantum;
findavgTime(processes,n,burst_time,quantum);


getchar();getchar();
 
return0;
}


