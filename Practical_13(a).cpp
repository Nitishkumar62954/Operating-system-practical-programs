#include<iostream>usingnamespacestd;

void show(int block[],int burst[],int n,int c,int allocation[]){cout<<"processes No "<<"size "<<"Allocated at "<<"Block size\n";for(int i=0;i<c;i++){
if(allocation[i]==-1){
cout<<i+1<<"\t"<<burst[i]<<"\t\t"<<"NotAllocated\n";
}
else{

cout<<i+1<<"\t"<<burst[i]<<"\t\t"<<allocation[i]+1<<"\t"<<block[allocation[i]]<<"\n";
}
}
}
voidfirst_fit(intblock[],intburst[],intn,intc){int allocation[c];
for(int i=0;i<c;i++)allocation[i]=-1;int memoryused[n];for(int i=0;i<n;i++)memoryused[i]=0;

for(int i=0;i<c;i++){//c=No of Processesfor(intj=0;j<n;j++){//j=Noofblocks
if((block[j]-memoryused[j])>=burst[i]){

memoryused[j]+=burst[i];allocation[i]=j;
j=n;
}
}
 
}

show(block,burst,n,c,allocation);
}

intmain(){
intn,c;
cout<<"No of Memory blocks you want to enter:-";cin>>n;
int Block[n];
cout<<"Enter no of process u want";cin>>c;
intBurst[c];

cout<<"Enter Size of memory blocks resp:-";for(int i=0;i<n;i++)
cin>>Block[i];
cout<<"Enter Size of Processess resp:-";for(int i=0;i<n;i++)
cin>>Burst[i];first_fit(Block,Burst,n,c);
}

