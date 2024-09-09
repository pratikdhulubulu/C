#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int ch,value;
    struct node *temp,*head,*newnode,*prevnode;
    head=NULL;
    while(ch!=5)
    {
        printf("enter choice\n1.add item as 1st\n2.remove intermediate item(by dada)\n3.remove last iteam\n4.display list\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("add item as 1st\n");
            newnode=(struct node*)malloc(sizeof(struct node));
            newnode->next=NULL;
            printf("enter newnode dada\n");
            scanf("%d",&newnode->data);
            if(head==NULL)
            {
                head=newnode;
            }
            else
            {
                newnode->next=head;
                head=newnode;
            }
            break;
            case 2:printf("2.remove intermediate item(by dada)\n");
            x:printf("enter the value node to be deleted\n");
            scanf("%d",&value);
            temp=head;
            prevnode=NULL;
            while(temp->data!=value)
            {
                 prevnode=temp;
                 temp=temp->next;
                
            }
            prevnode->next=temp->next;
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