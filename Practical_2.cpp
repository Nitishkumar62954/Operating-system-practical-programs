#include <iostream>#include <sys/sysinfo.h>#include<unistd.h>#include<string.h>usingnamespacestd;

voiddefVersion()
{

cout<< "\nCPUtypeandmodel:\n";
system("grep 'modelname' /proc/cpuinfo |awk'{print$4,$5,$6,$7,$8}'");


cout<< "Kernelversion: \n";
system("cat/proc/sys/kernel/osrelease");


cout << "Amount of time since the system was last booted: \n";system("cat /proc/uptime | awk'{print $1\n}'");
}


voidsecVersion()
{

cout<<"\nPRINTINAWK\n";
cout<<"Amountoftimeuserhasspentin:\nUsermode:\n";
 
system("grep'cpu'/proc/stat|awk'NR==1{print$2}'");cout<<"Systemmode:\n";
system("grep'cpu'/proc/stat|awk'NR==1{print$4}'");cout<<"Idle: \n";
system("grep'cpu'/proc/stat|awk'NR==1{print$5}'");


cout<<"\nSHELLSCRIPT\n";
cout << "Amount of time user has spent in:\n";system("Q2SecVersion");

cout << "\nNumber of disk requests:\n";system("grep'intr'/proc/stat|awk'{print$17}'");

cout << "Number of context switches: \n";system("grep'ctxt'/proc/stat|awk'{print$2}'");

cout << "Time at which system was booted:\n";system("grep'btime'/proc/stat|awk'{print$2}'");

cout << "Time at which system was booted:\n";system("Q2EpochToLocal");


cout<<"Numberofprocessescreated:\n";
}


voidthirdVersion(inta,intb)
{
 
structsysinfosInfo;
if(sysinfo(&sInfo)<0)
{

cout<<"\nErrorinfindinginformationaboutthesystem";exit(1);
}

 

"KB";;
 
cout<<"\nAmountofmemoryconfiguredintosystem:"<<sInfo.totalram/1024<<

cout << "\nAmount of memory currently available: " << sInfo.freeram/1024 << "KB";cout<<"\nLoadaverages:\n";
for(int i=1; i<=b/a; i++)
{
 

cout << i << ". " << sInfo.loads[0] << "\n";if (i==b/a)break;
sleep(a);
if(sysinfo(&sInfo)<0)
{

cout<<"\nErrorinfindinginformationaboutthesystem";exit(1);
}
}
}


intmain(intac,char*av[])
{

switch(ac){
case1:defVersion();break;
 
case2:if(strcmp(av[1],"-s")==0)
{

 



}
else


break;
 
defVersion();secVersion();



cout<<"\nInvalidoption\n";
 

case4:if(strcmp(av[1],"-l")==0)
{

 





}
else


break;
 
defVersion();secVersion();
thirdVersion(atoi(av[2]),atoi(av[3]));




cout<<"\nInvalidoption\n";
 

default:cout<<"\nInvalidnumberofarguments\n";
}
}

