#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
int main()
{
    int ch,value;
    struct node *temp,*head,*newnode,*prevnode;
    head=NULL;
    while(ch!=5)
    {
        printf("enter choice\n1.add item as 1st\n2.remove 1st item\n3.remove last iteam\n4.display list\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("add item as last\n");
            newnode=(struct node*)malloc(sizeof(struct node));
            newnode->next=NULL;
            newnode->prev=NULL;
            printf("enter newnode dada\n");
            scanf("%d",&newnode->data);
            if(head==NULL)
            {
                head=newnode;
                newnode->next=NULL;
                newnode->prev=NULL;
            }
            else
            {
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newnode;
                newnode->prev=temp;
                newnode->next=NULL;
            }
            break;
            case 2:
            temp=head;
            head=head->next;
            head->prev=NULL;
            free(temp);
            break;
            case 3:printf("3.remove last iteam\n");
            temp=head;
            prevnode=NULL;
            while(temp->next!=NULL)
            {
                prevnode=temp;
                temp=temp->next;
            }
            prevnode->next=NULL;
            free(temp);
            break;
            case 4:printf("4.display list\n");
            temp=head;
            while(temp!=NULL)
            {
                printf("%d ",temp->data);
                temp=temp->next;
            }
            break;
            default:
            printf("enter right choice\n");
        }
        
    }
}