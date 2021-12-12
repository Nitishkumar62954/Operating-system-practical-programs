#include <iostream>#include <sys/sysinfo.h>#include<unistd.h>#include<string.h>usingnamespacestd;

voiddefVersion()
{

cout<< "\nCPUtypeandmodel:\n";
system("grep 'modelname'/proc/cpuinfo |awk'{print$4,$5,$6,$7,$8}'");


cout<< "Kernelversion: \n";
system("cat/proc/sys/kernel/osrelease");


cout << "Amount of time since the system was last booted: \n";system("cat /proc/uptime | awk'{print $1\n}'");

cout<<"Theconfiguredmemoryis;\n";
system("cat/proc/meminfo| awk'NR==1{print$2}'\n");


cout<<"Amountoffreememoryis: \n";
 
system("cat/proc/meminfo|awk'NR==2{print$2}'\n");


 



b}'\n");


}
 
cout<<"Amountofusedmemoryis:\n";
system("cat/proc/meminfo|awk'{if(NR==1)a=$2;if(NR==2)b=$2}END{printa-
 


intmain(intac,char*av[])
{

defVersion();return0;
}

