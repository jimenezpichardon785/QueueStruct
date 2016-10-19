//Nerys Jimenez Pichardo
//The College of Saint Rose
//November 6, 2015
//Programming in Unix with C
//program to test the queue structure

#include <stdio.h>
#include "queue.h"

int main()
{
  queue *q;
  q = create_queue();
  
  if((is_empty(q)) < 0)
  {
    printf("Right now, your queue is empty\n");
  }
  
  enqueue(q, 1);
  printf("You added %d to the queue\n", peek(q));
  enqueue(q, 2);
  printf("You added %d to the queue\n", peek(q));
  enqueue(q, 3);
  printf("You added %d to the queue\n", peek(q));
  
  print_queue(q);
  printf("\n");
  
  printf("The queue contains %d elements\n", size(q));

  while(is_empty(q) >= 0)
  {
    printf("You dequeued %d from the queue \n", dequeue(q));
    printf("The queue contains %d elements\n", size(q));
  }

  deallocate_queue(q);
  return 0;
  
  
}
