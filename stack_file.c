

#include "stack_file.h"
int stack[5];
int top=-1,stack_max=5;
unsigned char stack_isFull(void)
{
    if(top == stack_max-1)
        return 1;          //full
    else
        return 0;          //have elements
}
unsigned char stack_isEmpty(void)
{
    if(top == -1)
        return 1;          //empty
    else
        return 0;          //have elements

}
void stack_push(int element)
{

    if(!stack_isFull ())
    {

        stack[++top]=element;
    }
    else
    {
        printf("\n***stack overFlow***\n");
    }


}
void stack_pop(void)
{

    if(!stack_isEmpty ())
    {

        printf("poped element %d \n",stack[top--]);
    }
    else
    {
        printf("\n***stack underFlow***\n");
    }

}
void stack_display(void)
{
    int i=0;
    if(!stack_isEmpty ())
    {
        printf("Elements of stack: ");
        for( i = top ; i>-1 ; i--)
            printf("%d\t",stack[i]);
    }
    else
    {
        printf("\n***stack underFlow***\n");
    }



}


void stack_application(void)
{

    int choice=0,element=0;

    while(1)
    {
        printf("\n********************************************************\n");
        printf("****1-PUSH\n****2-POP\n****3-DISPLAY\n****4-IS FULL\n****5-IS EMPTY\n****6-EXIT");
        printf("\n********************************************************\n");
        printf("Enter your choice : ");

        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\nEnter Element: ");
            scanf("%d",&element);
            stack_push(element);
            break;
        case 2:
            stack_pop();
            break;
        case 3:
            stack_display();
            break;
        case 4:
            if(stack_isFull())
                printf("stack is full\n");
            else
                printf("stack is not full\n");
            break;
        case 5:
               if(stack_isEmpty())
                printf("stack is empty\n");
            else
                printf("stack is not empty\n");
            break;
        case 6:
            return;
        default:
            printf("WARNING!!!");
            break;

        }


    }


}

