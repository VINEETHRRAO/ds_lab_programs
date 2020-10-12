/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define max 10
int a[max];
int rear=-1;
int front =-1;

 int isempty()
 { if((rear==-1)&&(front==-1))
  return 1;
  else 
  return 0;
 }
 
 int isfull()
 {if(rear==(max-1))
 return 1;
 else 
 return 0;
 }
 
 
 enqueue(int x)
 {if(isfull())
 printf("Queue is full\n");
 else if(isempty())
 front=rear=0;
 else 
 rear=rear+1;
 
 a[rear]=x;
 }
 
 
 
  dequeue()
 {int x;
 if(isempty())
{ printf("queue is empty\n");
 return;}
 else if(front==rear)
{ x=a[front];
  front=rear=-1;}
  else
  {x=a[front];
  front=front+1;
  }
  
  printf("the value %d is deleted from the queue\n",x);
 }
 
 
 display()
 {if(isempty())
 printf("queue is empty\n");
 else
 {printf("Queue elements are\n");
 for(int i=front;i<=rear;i++)
{ printf("\t%d",a[i]);
 printf("\n");}
 }
 }
 
 
 void main()
 {
     int choice,a;
     while(1)
     {
     printf("enter 1 for insertion\nenter 2 for deletion\nenter 3 for display\nenter 4 to exit\n");
     printf("enter your choice\n");
     scanf("%d",&choice);
     switch(choice)
     {
         case 1:printf("enter the nmber to be inserted\n");
                scanf("%d",&a);
                enqueue(a);
                break;
        case 2:dequeue();
               break;
        case 3:display();
               break;
        case 4:exit(1);
        default:printf("please enter a valid choice\n");
     }
     }
 }
 
 
 