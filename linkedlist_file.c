
#include <stdio.h>
#include "linkedlist_file.h"



myNode * head=NULL;

void deleteNode(int id)
{
    myNode * curr=head;
    myNode * prev=head;


    while(curr != NULL)
    {
        if(curr->id == id)
        {

            //1st node
            if(prev == curr)
            {
                head=curr->next;
                free(curr);

            }
            else //any node
            {
                prev->next=curr->next;
                free(curr);
            }

            return;
        }

        prev=curr;
        curr=curr->next;

    }

    printf("\n*****Not found node to delete*****\n");

}



void createNode(int data,int id, char grade)
{

    myNode *temp=NULL;
    myNode * newNode=(myNode *)malloc (sizeof(myNode));
    newNode->data=data;
    newNode->id=id;
    newNode->grade=grade;
    newNode->next=NULL;

    if(head == NULL) // 1st node
    {
        head=newNode;
    }
    else
    {
        temp=head;

        while( temp->next != NULL)
        {
            temp=temp->next;
        }

        temp->next=newNode;
    }


}
void displayNodes(void)
{
    printf("\n\n*****Display Nodes*****\n\n");
    myNode* temp=head;

    while(temp != NULL)
    {

        printf("Data= %d //",temp->data);
        printf("ID= %d //",temp->id);
        printf("Grade=  %c\n",temp->grade);


        temp=temp->next;

    }


}
void searchNode(int id)
{

    myNode* temp=head;

    while(temp != NULL)
    {
        if(temp->id == id)
        {
            printf("Data= %d\n",temp->data);
            printf("ID= %d\n",temp->id);
            printf("grade=  %c\n",temp->grade);

            return;
        }

        temp=temp->next;

    }
    printf("\n*****Not found node to search*****\n");

}
void editNode(int id)
{
    myNode* temp=head;

    while(temp != NULL)
    {
        if(temp->id == id)
        {

            printf("New Data\n");
            scanf("%d",&temp->data);
            printf("new Grade\n");
            scanf(" %c",&temp->grade);

            return;
        }

        temp=temp->next;

    }
    printf("\n*****Not found node to edit*****\n");


}



void linkedList_application(void)
{
    int choice=0,data=0,id=0;
    char grade=0;
    while(1)
    {
        printf("\n********************************************************\n");
        printf("****1-CREATE NODE\n****2-EDIT NODE\n****3-SEARCH NODE\n****4-DELETE NODE\n****5-DISPLAY NODES\n****6-EXIT");
        printf("\n********************************************************\n");
        printf("Enter your choice : ");

        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\nEnter Data: ");
            scanf("%d",&data);
            printf("\nEnter ID: ");
            scanf("%d",&id);
            printf("\nEnter Grade: ");
            scanf(" %c",&grade);
            createNode(data,id,grade);

            break;
        case 2:
            printf("\nEnter ID: ");
            scanf("%d",&id);
            editNode(id);
            break;
        case 3:
            printf("\nEnter ID: ");
            scanf("%d",&id);
            searchNode(id);
            break;
        case 4:
            printf("\nEnter ID: ");
            scanf("%d",&id);
            deleteNode(id);
            break;
        case 5:
            displayNodes();
            break;
        case 6:
            return;
        default:
            printf("WARNING!!!");
            break;

        }


    }






}



