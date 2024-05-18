
#include "queue_list.h"

#define Q_MAX  5
int queue[Q_MAX],front=-1,rear=-1;

unsigned char queue_isFull(void)
{
    if(rear == Q_MAX-1)
        return 0 ; //  queue is full
    else
        return 1 ; // queue not full
}

unsigned char queue_isEmpty(void)
{
    if( (front == -1 ) || (front > rear))
        return 0 ; //  queue is empty
    else
        return 1 ; // queue not empty

}
void queue_enQueue(void)
{

    int element=0;

    if(queue_isFull())
    {

        if(front == -1) // 1st element
        {
            front++;
            rear++;

        }
        else
        {
            rear++;
        }
        printf("Enter your element : ");
        scanf("%d",&element);
        queue[rear]=element;

    }
    else
    {
        printf ("***Queue is full ***\n");
    }



}
void queue_deQueue(void)
{


    if(queue_isEmpty())
    {
        printf("Dequeued element is : %d \n",queue[front++]);
    }
    else
    {
        printf ("***Queue is Empty ***\n");
    }



}
void queue_display(void)
{

    int i=0;
    if(queue_isEmpty())
    {

        printf("Queue is : ");
        for(i=front ; i<=rear ; i++)
            printf(" %d ",queue[i]);
    }
    else
    {
        printf ("***Queue is Empty ***\n");
    }



}

void queue_application(void)
{
    int choice=0,element=0;

    while(1)
    {
        printf("\n********************************************************\n");
        printf("****1-ENQUEUE\n****2-DEQUEUE\n****3-DISPLAY\n****4-IS FULL\n****5-IS EMPTY\n****6-EXIT");
        printf("\n********************************************************\n");
        printf("Enter your choice : ");

        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            queue_enQueue();
            break;
        case 2:
            queue_deQueue();
            break;
        case 3:
            queue_display();
            break;
        case 4:
            if(queue_isFull() == 0)
                printf("QUEUE is full\n");
            else
                printf("QUEUE is not full\n");
            break;
        case 5:
            if(queue_isEmpty() == 0)
                printf("QUEUE is empty\n");
            else
                printf("QUEUE is not empty\n");
            break;
        case 6:
            return;
        default:
            printf("WARNING!!!");
            break;

        }


    }
}
