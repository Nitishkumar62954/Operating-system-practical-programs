#include<iostream>#include<sys/wait.h>#include<unistd.h>using namespace std;intmain(){
intx;x=fork();
if(x==0){
execlp("/home/kali/Desktop/practical5","practical5",NULL);

 
}
else{
 



wait(NULL);
cout<<"Childcompleted\n";
 


}
return(0);
}

