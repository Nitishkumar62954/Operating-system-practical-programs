#include <iostream>#include <sys/wait.h>#include <unistd.h>usingnamespacestd;

intmain()
{

pid_tid=fork();


//childprocessif(id==0)
{

cout<<"\nChildTerminated";
}


// parent processelse
 
{
wait(NULL);
cout<<"\nParentTerminated";
}


return0;
}

