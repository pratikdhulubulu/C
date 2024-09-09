#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *top,*newnode,*temp;
    top=NULL;
    int c;
    while(c!=4)
    {
        printf("\npush:1 pop:2 display:3 exit:4\n");
        printf("enter choice:\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1: printf("push operation\n");
           newnode=(struct node*)malloc(sizeof(struct node));
            printf("enter data to be pushed\n");
            scanf("%d",&newnode->data);
            if(top==NULL)
            {
               newnode->next=NULL;
                top=newnode;
            }
            else
            {
                newnode->next=top;
                top=newnode;
            }
            break;
            case 2:
            printf("pop opration\n");
            if(top!=NULL)
            {
                temp=top;
                top=top->next;
                temp->next=NULL;
                printf("poped iteam is %d\n",temp->data);
                free(temp);
            }
            else
            {
                printf("stack is empty\n");
            }
            break;
            case 3:
            printf("display operation\n");
            if(top!=NULL)
            {
                temp=top;
                while(temp!=NULL)
                {
                    printf("%d ",temp->data);
                   temp=temp->next;
                }
            }
            else
            {
                printf("stack is empty\n");
            }
            break;
            case 4:
            break;
            default:
            printf("invalid choice\n");
        }
    }

  return 0;
}