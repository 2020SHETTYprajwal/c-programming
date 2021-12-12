#define SIZE 50
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
char stk[SIZE];
int top=-1;
void push(char elem)
{
   stk[++top]=elem;
}
char pop()
{
   return stk[top--];
}
int precd(char sym)
{
   switch(sym)
   {
      case '#':return 0;
      case '(':return 1;
      case'+': return 2;
      case'-': return 2;
              
      case'*': return 3;
      case'/': return 3;
      case'%': return 3;
              
      case'^':return 4;
      default:printf("invalid operator:%c\n",sym);
      exit(0);
      break;
    }
}
  void infix_to_postfix(char*infix,char*postfix)
 {
    char sym, ele;
    int i=0,j=0;
     push('#');
    while((sym=infix[i++])!='\0')
    {
      if(sym=='(')
      push(sym);
      else if(isalnum(sym))
      postfix[j++]=sym;
      else if(sym==')')
      {
         while(stk[top]!='(')
         postfix[j++]=pop();
         ele=pop();
      }
      else
      {
        while(precd(stk[top])>=precd(sym))
        {
          postfix[j++]=pop();
        }
          push(sym);
      }
   }
    while(stk[top]!='#')
    {
      postfix[j++]=pop();
    }
      postfix[j]='\0';
   }
    int main()
    {
      char infix[30],postfix[30];
      printf("enter a valid infix expression\n");
      scanf("%s", infix);
      infix_to_postfix(infix,postfix);
      printf("postfix expression is %s",postfix);
      return 0;
}


    
       
