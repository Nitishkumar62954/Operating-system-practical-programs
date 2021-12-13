# Operating-system-practical-programs
Q1. Implement Round robin scheduling algorithm with quanta 3. Compute waiting time, turnaround time. 
          Round Robin is a CPU scheduling algorithm where each process is assigned a fixed time slot in a cyclic way  
In this program , i have simulated the round robin algorithm with value of quantum 3.
Completion Time: Time at which process completes its execution.
Turn Around Time: Time Difference between completion time and arrival time. Turn Around Time = Completion Time – Arrival Time
Waiting Time(W.T): Time Difference between turn around time and burst time. 
Waiting Time = Turn Around Time – Burst Time


Q2. Write a program to demonstrate fork where parent and child run same codes and parent process should be executed first.
       Fork system call is used for creating a new process, which is called child process, which runs concurrently with the process that makes the fork() call (parent process). After a new child process is created, both processes will execute the next instruction following the fork() system call. 
In this, a child process is created. fork() returns 0 in the child process and positive integer in the parent process.
