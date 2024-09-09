// Infix To Postfix Conversion Using Stack
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	struct stack
	{
		int top;
		int stack[20];
	}
	s;
	char a[20],b[20],ch;
	int i,n,k=0;
	printf("Enter infix expression: \n");
	scanf("%s",a);
	n=strlen(a);
	s.top=-1;
	for(i=0;i<n;i++)
	{
		ch=a[i];
		switch (ch)
		{
			case '(':
			s.top++;
			s.stack[s.top]=ch;
			break;
			case ')':
			while(s.stack[s.top]!='(')
			{
				b[k]= s.stack[s.top];
				s.top--;
				k++;
			}
			s.top--;
			break;
			case '+':
			x: if(s.stack[s.top]=='('||s.top==-1)
			{
				s.top++;
				s.stack[s.top]=ch;
			}
			else
			{
				b[k]= s.stack[s.top];
				s.top--;
				k++;
				goto x;
			}
			break;
			case '-':
			y: if(s.stack[s.top]=='('||s.top==-1)
			{
				s.top++;
				s.stack[s.top]=ch;
			}
			else
			{
				b[k]= s.stack[s.top];
				s.top--;
				k++;
				goto y;
			}
			break;
			case '*':
			z: if(s.stack[s.top]=='('||s.top==-1||s.stack[s.top]=='+'||s.stack[s.top]=='-')
			{
				s.top++;
				s.stack[s.top]=ch;
			}
			else
			{
				b[k]= s.stack[s.top];
				s.top--;
				k++;
				goto z;
			}
			break;
			case '/':
			a: if(s.stack[s.top]=='('||s.top==-1||s.stack[s.top]=='+'||s.stack[s.top]=='-')
			{
				s.top++;
				s.stack[s.top]=ch;
			}
			else
			{
		     	b[k]= s.stack[s.top];
				s.top--;
				k++;
				goto a;
			}
			break;
			default:
				b[k]=ch;
				k++;
			}
		}
		while(s.top!=-1)
		{
			if(s.stack[s.top]=='(')
			{
			    s.top--;
		    }
      		else
		    {
				b[k]= s.stack[s.top];
			    s.top--;
			    k++;
			}
	    }
	    printf("Postfix expression is %s",b);
}
