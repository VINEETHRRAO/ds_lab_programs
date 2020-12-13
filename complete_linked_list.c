
#include<stdio.h>
struct node 
{int data;
struct node *next;
};
struct node *head=NULL;
struct node* head2=NULL;


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

void reverse()
{struct node  *prev,*current,*nxt;
current=head;
prev=nxt=NULL;
while(current!=NULL)
{nxt=current->next;
current->next=prev;
prev=current;
current=nxt;
}
head=prev;

}

void concatenate()
{struct node *ptr;
 if(head==NULL)
 {head=head2;
 return;
 }
 else if(head2==NULL)
     return;
else{ptr=head;
    while(ptr->next!=NULL)
    ptr=ptr->next;
ptr->next=head2;
}}
  



void sort() 
{ 
    int flag, i; 
    struct node *ptr1; 
    struct node *ptr2 = NULL; 
  
    if (head == NULL) 
        return; 
  
    do
    { 
        flag = 0; 
        ptr1 = head; 
  
        while (ptr1->next != ptr2) 
        { 
            if (ptr1->data > ptr1->next->data) 
            {  
                swap(ptr1, ptr1->next); 
                flag = 1; 
            } 
            ptr1 = ptr1->next; 
        } 
        ptr2 = ptr1; 
    } 
    while (flag); 
    printf("\n\nSorted\n\n");
} 
void swap(struct node *a,struct node *b) 
{ 
    int temp = a->data; 
    a->data = b->data; 
    b->data = temp; 
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
printf("\n");
}}


void push()
{struct node *ptr;
int item;
printf("ENTER THE ELEMENT TO BE PUSHED\n");
scanf("%d",&item);
ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=item;
ptr->next=head2;
head2=ptr;
printf("NODE INSERTED AT BEGINING\n");
}

void pop()
{struct node *ptr;
if(head2==NULL)
{printf("LINKED LIST IS EMPTY\n");}
else 
{
    ptr=head2;
    head2=ptr->next;
    free(ptr);
    printf("ELEMENT POPPED\n");

}}

void enqueue()
{struct node *ptr,*temp;
int item;
printf("ENTER THE ELEMENT TO ENQUEUE\n");
scanf("%d",&item);
ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=item;
if(head2==NULL)
{ptr->next=NULL;
head2=ptr;
printf("ENQUEUE SUCCESFULL\n");
}
else 
{temp=head2;
while(temp->next!=NULL)
{temp=temp->next;}
temp->next=ptr;
ptr->next=NULL;
printf("ENQUEUE SUCCESFULL\n");
}
}

void display2()
{struct node *temp;
temp=head2;
if(head2==NULL)
printf("LINKED LIST IS EMPTY\n");
else
{while(temp!=NULL)
{printf("%d\t",temp->data);
temp=temp->next;}
printf("\n");
}}

void main()
{int c;
while(1)
{

printf(" ENETR 1 FOR INSERTION AT BEGINING\n ENTER 2 FOR INSERTION AT POSITION\n ENETR 3 FOR INSERTION AT LAST\n ENTER 4 FOR DELETION AT BEGINING\n ENTER 5 FOR DELETION AT END\n ENTER 6 FOR DELETING AT POSITION\n ENTER 7 FOR DISPLAY\n ENTER 8 FOR REVERSE\n");
printf(" ENETR 9 FOR PUSH\n ENTER 10 FOR POP\n ENETR 11 FOR ENQUEUE\n ENTER 12 FOR DEQUEUE\n ENTER 13 FOR SORTING\n ENTER 14 FOR CONCATENATION\n");
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
 case 8:reverse();
        break;
 case 9:push();
        printf("STACK IS\n");
        display2();
 break;
 case 10:pop();
        printf("STACK IS\n");
        display2();
         break;
 case 11:enqueue();
        printf("QUEUE IS\n");
        display2();
        break;
 case 12:pop();
        printf("QUEUE IS\n");
        display2();
         break;
case 13:sort();
       break;
case 14:concatenate();
        printf("AFTER CONCATENATION:\n");
        display();
        break;
 default:exit(1); }
 
}}