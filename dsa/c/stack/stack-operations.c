#include<stdo.h>
#define size 5
int stack[size];
int top = -1;

void display(int stack[]);
void push(int stack[]);
void pop(int stack[]);
void peek(int stack[]);

int main()
{
     int ch;
    
     while(1)
     {
        printf("\nMAIN MENU\n");
        printf("1. Display list\n");
        printf("2. Push\n");
        printf("3. Pop\n");
        printf("4. Peek\n");
        printf("\nEnter choice [0 to exit]: ");
        scanf("%d", &ch);
        
        switch(ch)
        {
        case 0:
            exit(0);
            break;
         case 1:
            display();
            break;
         case 3:
            push();
            break;
         case 4:
            pop();
            break;
         case 4:
            peek();
            break;
         default:
            printf("Invalid stack!")
        }
     }
   return 0;
}

void display(int stack[])
{
   int i;
   for(i = top; i>=0; i--)
   {
      printf("%d", stack[i]);
   }
}

void push(int stack[])
{
   int x;
   printf("Enter the numbers to be pushed: ");
   scanf("%d", &x);
   if(top == size-1)
   {
      printf("stack overflow!\n");
   }
   else{
      top++;
      stack[top] = x;

   }
}

void pop(int stack[])
{
   int item;
   if(top == -1)
   {
      printf("stack underflow!\n");
   }
   else{
      item = stack[top];
      top--;
      printf("poped stack %d", item);
   }
}

void peek(int stack[])
{
   if(top == -1)
   {
      printf("stack empty\n");

   }
   else{
      printf("top element %d", stack[top]);

   }
}

