#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c,ch,pos,count,value;
    struct node
    {
        int data;
        struct node *next;
        struct node *prev;
    };
    struct node *head,*newnode,*temp;
     temp=head=NULL;
    while(1)
    {
        printf("do you have a node enter 1 \n");
        scanf("%d",&c);
        if(c==1)
        {
            newnode=(struct node*) malloc(sizeof(struct node));
            printf("\nenter node data\n");
            scanf("%d",&newnode->data);
            newnode->next=NULL;
            newnode->prev=NULL;
          
          printf("insertion operation\n");
          printf("begining:1 last:2 display:3\n");
          scanf("%d",&ch);
          switch(ch)
          {
            case 1:printf("insertion at begining\n");
            head->prev=newnode;
            newnode->next=head;
            head=newnode;
            break;
            case 2:printf("\ninsertion at last\n");
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->prev=temp;
            break;
            case 3:printf("\ndisplay\n");
            temp=head;
            while(temp!=NULL)
            {
                printf("%d ",temp->data);
                temp=temp->next;
            }
            break;
            default:
            	printf("enter valid choice\n");
          }
       }
       else
       {
        break;
       }
  } 

    return 0;
}    