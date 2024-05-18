
#include <stdio.h>
#include <stdlib.h>

#include "linkedlist_file.h"
#include "stack_file.h"
#include "queue_list.h"

enum
{
close,
open

};


#define Queue       open
#define linkedlist close
#define stack      0


#if  linkedlist == open
int main()
{
   linkedList_application();
    return 0;
}
#elif stack == open
int main()
{
    stack_application();
    return 0;
}
#elif Queue == open
int main()
{
//update
    queue_application();
    return 0;
}

#else
#error "stack or linkedlist or queue"
#endif // stack
