


#include <stdio.h>
#include "queue.h"

typedef struct person
{
     int age;
     TAILQ_ENTRY(person) *next;
}t_person;



int main()
{
    
    TAILQ_HEAD(person_set,person)head=TAILQ_HEAD_INITIALIZER(head);
     t_person * p=(t_person *)malloc(sizeof(t_person));
     if(!p){printf("error"); exit(0);}
     TAILQ_INSERT_HEAD(&head,p,next);
    return 0;
}