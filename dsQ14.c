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
        printf("enter choice\n1.add item as last\n2.remove 1st iteam\n3.remove last iteam\n4.display list\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("add item as last\n");
            newnode=(struct node*)malloc(sizeof(struct node));
            newnode->next=NULL;
            printf("enter newnode dada\n");
            scanf("%d",&newnode->data);
            if(head==NULL)
            {
                head=newnode;
                newnode->next=head;
            }
            else
            {
                temp=head;
                while(temp->next!=head)
                {
                    temp=temp->next;
                }
                temp->next=newnode;
                newnode->next=head;
            }
            break;
            case 2:printf("2.remove 1st iteam\n");
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            temp->next=head->next;
            temp=head;
            head=head->next;
            free(temp);
            break;
            case 3:printf("3.remove last iteam\n");
            temp=head;
            prevnode=NULL;
            while(temp->next!=head)
            {
                prevnode=temp;
                temp=temp->next;
            }
            prevnode->next=head;
            free(temp);
            break;
            case 4:printf("4.display list\n");
            temp=head;
            while(temp->next!=head)
            {
                printf("%d ",temp->data);
                temp=temp->next;
            }
            printf("%d",temp->data);
            break;
            default:
            printf("enter right choice\n");
        }
        
    }
}