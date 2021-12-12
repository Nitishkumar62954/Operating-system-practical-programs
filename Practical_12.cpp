#include <iostream>#include<pthread.h>usingnamespacestd;

int global[2];

void*sum_thread(void*arg)
{
int *args_array;args_array=(int*)arg;

int n1,n2,sum;n1=global[0];n2=global[1];sum= n1+n2;

cout<<"\nSum="<<sum;

returnNULL;;
}

intmain()
{
cout<<"\nFirstnumber:";cin>>global[0];

cout<<"\n Second number: ";cin>>global[1];

pthread_t tid_sum;pthread_create(&tid_sum,NULL,sum_thread,(void*)&global); pthread_join(tid_sum,NULL);

return0;
}

