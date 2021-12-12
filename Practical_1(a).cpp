)#include<iostream>#include<unistd.h>using namespace std;intmain()
{

intx,y;


x=fork();
cout<<"\nx="<<x;


y=fork();
cout<<"\ny="<<y;


cout<<"\nBye"<<endl;


return0;
}
 

