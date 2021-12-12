#include<stdio.h>
#include<stdlib.h>
#define max 6
void push(int s[],int*t,int item)
{
  if(*t>=max-1)
  {
    printf("stack is full\n");
  }
  else
  {
    s[++(*t)]=item;
  }
}
  int pop(int s[],int*t)
  {
   int item;
   if(*t==-1)
   {
     printf("stack is empty\n");
   }
   else
   {
     item=s[*t];
     *t=*t-1;
     return(item);
   }
  }
   void display(int s[],int*t)
    {
      int i;
      if(*t==-1)
      {
        printf("STACK IS EMPTY\n");
      }
      else
       {
         for(i=*t;i>=0;i--)
         printf("%d\t",s[i]);
         printf("\n");
       }
    }
      int pallindrome(int s[])
      {
        int y,z,x,a,i,flag=1,top=-1,n, item;
        printf("ENTER THE STACK SIZE YOU WANT");
        scanf("%d",&n);
        printf("enter the %d element\n",n);
        for(i=0;i<n;i++)
        {
          scanf("%d",&item);
          push(s,&top,item);
        }
        for(i=0;i<n;i++)
        {
          item=s[top--];
          if(s[i]!=item)
          return 0;
        }
         return 1;
      }
       void main()
       {
         int choice,item,n,i,s[100],top=-1,flag;
          while(1)
          {
            printf("1-->push\n");
            printf("2-->pop\n");
            printf("3-->display\n");
            printf("4-->palindrome\n");
            printf("5-->exit\n");
            scanf("%d",&choice);
            switch(choice)
            {
              case 1:
                   printf("enter the element to be pushed\n");
                    scanf("%d",&item);
                    push(s,&top,item);
                    break;
              case 2:
                     item=pop(s,&top);
                     printf("the item poped in the stack is :%d\n",item);
                    break;
              case 3:
                     display(s,&top);
                     break;             
               case 4:
                      flag=pallindrome(s);
                        if(flag==0)
                      printf("the number is not palindrome\n");
                       else
                       printf("the number is palindrome\n");
                       break;
               case 5:
                      exit(0);
             }
       }
}




            
       
 
