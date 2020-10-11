/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<ctype.h>
#define SIZE 20
char stack[SIZE];int top=-1;
 push(char e)
 {stack[++top]=e;}
 
 char pop()
 {return(stack[top--]);}
 
 int precedance(char s)
 { if(s=='^') 
{ return(3);}
else if(s=='*' || s=='/')
 {return(2);}
else if(s=='+' || s=='-')
{return(1);}
else{ return(0);}
}
 
 
 
void main()
{
 char infix[50],postfix[50],ch,ele;
 int i=0,k=0;
 printf("enter infix expression\n");
 scanf("%s",infix);
 push('#');
 while((ch=infix[i++]) != '\0')
 {
     if (ch== '(') 
     push(ch);
     else if(isalnum(ch)) 
     postfix[k++]=ch;
     else if(ch==')')
     {while((stack[top]) !='(')
       postfix[k++]=pop();
     ele=pop();
     }
     else 
     {while(precedance(stack[top])>= precedance(ch))
       postfix[k++]=pop();
     
       push(ch);
     }
 }
 while((stack[top]) != '#')
 postfix[k++]=pop();
 postfix[k]='\0' ;
 printf("postfix expression is equal to %s\n",postfix);
   
}
