#ifndef LINKEDLIST_FILE_H_INCLUDED
#define LINKEDLIST_FILE_H_INCLUDED


typedef struct node
{
    int data;
    int id;
    char grade;
    struct node * next;
} myNode;




void createNode(int data,int id, char grade);
void displayNodes(void);
void searchNode(int id);
void deleteNode(int id);
void editNode(int id);

void linkedList_application(void);






#endif // LINKEDLIST_FILE_H_INCLUDED
