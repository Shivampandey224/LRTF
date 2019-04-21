Name: Shivam Pandey 
Reg. No. : 11705698
Roll No. : 64
Email Address: shivam.pandey224@gmail.com 

Description:
Longest remaining time first

This is a pre-emptive version of Longest Job First (LJF) scheduling algorithm. In this scheduling algorithm, we find the process with maximum remaining time and then process it. We check for the maximum remaining time after some interval of time to check if another process having more Burst Time arrived up to that time

Longest remaining time first example:

Process Arrival time Burst Time
P1	1 ms	2 ms
P2	2 ms	4 ms
P3	3 ms	6 ms
P4	4 ms	8 ms

Working: (for input 1):
1.	At t = 1, Available Process : P1. So, select P1 and execute 1 ms.
2.	At t = 2, Available Process : P1, P2. So, select P2 and execute 1 ms (since BT(P1)=1 which is less than BT(P2) = 4)
3.	At t = 3, Available Process : P1, P2, P3. So, select P3 and execute 1 ms (since, BT(P1)
= 1 , BT(P2) = 3 , BT(P3) = 6).
4.	Repeat the above steps until the execution of all processes Gantt chart will be as following below,






Final table look like
 
 

Output


Algorithm

.Procedure
•	Step-1: First, sort the processes in increasing order of their Arrival Time.
•	Step-2: Choose the process having least arrival time but with most Burst Time. Then process it for 1 unit. Check if any other process arrives upto that time of execution or not.
•	Step-3: Repeat the above both steps until execute all the processes.

Question

  Three students (a, b, c) are arriving in the mess at the same time. The id numbers of these students are 2132, 2102, 2453 and the food taken time from the mess table is 2, 4 and 8 minutes. If the two students have same remaining time so it is broken by giving priority to the students with the lowest id number. Consider the longest remaining time first (LRTF) scheduling algorithm and calculate the average turnaround time and waiting time.

Explanation

  There are 3 student a,b,c
  Process id of students are 2132,2102,2453
Arrival time of all student is same let arrival time be 2 minute Burst time of 3 student (a,b,c) is 2,4,8 minute
Average turnaround time =completion time – arrival time Waiting time=turnaround time – burst tie

Solution

  include <stdio.h>
  int main() 
 {
  int a[10],p[10],b[10],x[10],i,j,largest,count=0,time,n;
  double avg=0,tt=0,end;
  printf("enter the number of Processes:\n");
  scanf("%d",&n); 
  printf("enter process id\n");
  for(i=0;i<n;i++)
  scanf("%d",&p[i]);
  printf("enter arrival time\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("enter burst time\n");
  for(i=0;i<n;i++)
  scanf("%d",&b[i]); 
  for(i=0;i<n;i++)
  x[i]=b[i];
  b[9]=-999;
  for(time=0;count!=n;time++)
 {
  largest=9;
  for(i=0;i<n;i++)
  {
   if(a[i]<=time && b[i]>b[largest] && b[i]>0)
   largest=i;
   }
   b[largest]--;
   if(b[largest]==0)
  {
   count++;
   end=time+1;
   avg=avg+end-a[largest]-x[largest];
   tt= tt+end-a[largest];
   }
   }
   printf("\n\nAverage waiting time = %lf\n",avg/n);
   printf("Average Turnaround time = %lf",tt/n);
   }


Output

Average waiting time=8.333 Average turnaround time=13.00
 

