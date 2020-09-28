/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<conio.h>
#define SIZE 3
int stack[SIZE],top=-1;

void push(int a)
{if(top==SIZE-1)
printf("stack is full\n");
else 
{top=top+1;
stack[top]=a;
printf("element %d succesfully inserted\n",a);
}
}

void pop()
{if(top==-1)
printf("stack is empty\n");
else
{printf("%d has been removed from stack\n",stack[top]);
top=top-1;
}
}


void display()
{if(top==-1)
printf("stack is empty\n");
else
{printf("stack elements are\n");
for(int i=top;i>=0;i--)
printf("%d\n",stack[i]);
}
}

int main()
{int c,a;
while(1)
{ printf("enter 1 for PUSH\t2 for POP\t3 for DISPLAY\t4 to EXIT\n");
 scanf("%d",&c);
 switch(c){
     case 1: printf("enter the value to be pushed:\n");
             scanf("%d",&a);
             push(a);
             break;
     case 2: pop();
             break;
     case 3: display();
            break;
     case 4: exit(0);
     default:printf("\nplease select a valid choice\n");
}
}

    return 0;
}
