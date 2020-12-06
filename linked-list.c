/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
struct node 
{int data;
struct node *next;
};
struct node *head=NULL;


void insert_b()
{struct node *ptr;
int item;
printf("ENTER THE ELEMENT TO BE INSERTED AT BEGINING\n");
scanf("%d",&item);
ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=item;
ptr->next=head;
head=ptr;
printf("NODE INSERTED AT BEGINING\n");
}

void insert_l()
{struct node *ptr,*temp;
int item;
printf("ENTER THE ELEMENT TO BE INSERTED AT LAST\n");
scanf("%d",&item);
ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=item;
if(head==NULL)
{ptr->next=NULL;
head=ptr;
printf("NODE INSERTED AT BEGINING\n");
}
else 
{temp=head;
while(temp->next!=NULL)
{temp=temp->next;}
temp->next=ptr;
ptr->next=NULL;
printf("NODE INSERTED AT END\n");
}
}

void insert_p()
{struct node *ptr,*temp;
int item,p;
int count=0;
printf("ENTER THE ELEMENT TO BE INSERTED\n");
scanf("%d",&item);
printf("enter the position to insert element\n");
scanf("%d",&p);
ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=item;
temp=head;
while(temp!=NULL)
{temp=temp->next;
count++;}
if(p>(count+1))
{printf("CANNOT INSERT AT POSITION %d",p);}
else if(p==1)
{ptr->next=temp;
head=ptr;
printf("ELEMENT INSERTED AT POSITION 1\n");
}
else{temp=head;
    int i=1;
    while(i<p-1)
    {temp=temp->next;
     i++;
    }
    ptr->next=temp->next;
    temp->next=ptr;
    printf("ELEMENT INSERTED AT POSITION %d\n",p);
}
}

void delete_b()
{struct node *ptr;
if(head==NULL)
{printf("LINKED LIST IS EMPTY\n");}
else 
{
    ptr=head;
    head=ptr->next;
    free(ptr);
    printf("ELEMENT DELETED FROM BEGINING\n");

}}

void delete_p()
{
    struct node *ptr1,*ptr;
    int p,i;
   printf("enter the position to delete element\n");
scanf("%d",&p);
ptr=head;
i=1;
if(p==1)
{delete_b();
return;}
while(i<p)
{ptr1=ptr;
 ptr=ptr->next;
 if(ptr==NULL)
  {printf("cannot delete at position %d",p);
   return;}
    i++;
}
ptr1->next=ptr->next;   
free(ptr);
printf("NODE DELETED FROM POSITION %d",p);
}

void delete_l()
{
    struct node *ptr1,*ptr;
    if(head==NULL)
    printf("LINKED LIST IS EMPTY\n");
    else if(head->next==NULL)
    {head=NULL;
    free(head);
    printf("NODE DELETED FROM BEGINING\n");}
    else{
        ptr=head;
        while(ptr->next!=NULL)
        {ptr1=ptr;
        ptr=ptr->next;
        }
        ptr1->next=NULL;
        
        
        free(ptr);
        printf("NODE DELETED FROM END\n");
    }

}

void display()
{struct node *temp;
temp=head;
if(head==NULL)
printf("LINKED LIST IS EMPTY\n");
else
{while(temp!=NULL)
{printf("%d\t",temp->data);
temp=temp->next;}
}}

void main()
{int c;
while(1)
{
printf("ENETR 1 FOR INSERTION AT BEGINING\n ENTER 2 FOR INSERTION AT POSITION\n ENETR 3 FOR INSERTION AT LAST\n");
printf("ENTER 4 FOR DELETION AT BEGINING\n ENTER 5 FOR DELETION AT END\nENTER 6 FOR DELETING AT POSITION\n ENTER 7 FOR DISPLAY\n");
scanf("%d",&c);
switch(c)
{case 1:insert_b();
         break;
 case 2:insert_p();
         break;
 case 3:insert_l();
        break;
 case 4:delete_b();
        break;
 case 5:delete_l();
        break;
 case 6:delete_p();
        break;
 case 7:display();
        break;
 default:exit(1); }
 
}}