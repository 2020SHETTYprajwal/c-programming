#include<stdio.h>
#include<stdlib.h>
int a[100],n;
void create()
{
   int i;
   printf("enter number of elements");
   scanf("%d",&n);
   printf("enter the elements");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   return;
}  
void display()
{
  int i;
  printf("elements are:");
  for(i=0;i<n;i++)
  printf("\t%d\t",a[i]);
  return;
}
 void insert()
  {
   int ele,pos,i;
   printf("enter the elements to be inserted");
   scanf("%d",&ele);
   printf("enter the pos in which u want to insert");
   scanf("%d",&pos);
   if(pos<=n)
   {
     for(i=n-1;i>pos;i--)
     a[i+1]=a[i];
     n++;
     a[pos]=ele;
   }
     else
     {
      printf("invalid pos");
     }
  }
 void delete()
  {
   int pos,i;
   printf("enter the pos in which u want to delete");
   scanf("%d",&pos);
    if(pos<n)
    {
    for(i=pos;i<n-1;i++)
     a[i]=a[i+1];
     n--;
    }
   else
    {
     printf("invalid pos");
     return;
    }
}
 void main()
 {
   int choice;
   while(1)
   {
    printf("\n 1:create array\n 2:display array\n 3:insert element\n 4:delete element\n 5:exit");
    printf("\n\n enter your choice ");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1:create();
            break;
     case 2:display();
             break;
     case 3:insert();
            break;
     case 4:delete();
             break;
     case 5:exit(0);
      default:printf("invalid option");
             break;
     }
     }
}

      
