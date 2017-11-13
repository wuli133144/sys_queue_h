


#include <stdio.h>
#include "queue.h"

typedef struct person
{
     int age;
     TAILQ_ENTRY(person) next;
}t_person;



          

int main()
{
    
    TAILQ_HEAD(person_set,person)head=TAILQ_HEAD_INITIALIZER(head);
     t_person * p=(t_person *)malloc(sizeof(t_person));
     p->age=1;
     
     t_person * p1=(t_person *)malloc(sizeof(t_person));
     p1->age=2;

      t_person * p2=(t_person *)malloc(sizeof(t_person));
     p2->age=2;
  
     if(!p){printf("error"); exit(0);}
     //头插入法
     TAILQ_INSERT_HEAD(&head,p,next);
     TAILQ_INSERT_HEAD(&head,p1,next);
     TAILQ_INSERT_HEAD(&head,p2,next);
      
 

     //尾插入法
     t_person *p4=(t_person *)malloc(sizeof(t_person));
     TAILQ_INSERT_TAIL(&head,p4,next);


     //TAILQ_INSERT_HEAD(&head,p,next);
     //TAILQ_INSERT_HEAD(&head,p,next);

    t_person *pdata=NULL;
    //遍历
     TAILQ_FOREACH(pdata,&head,next){
         printf("data=%d",pdata->age);
     }

    return 0;
}