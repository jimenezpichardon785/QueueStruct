//Nerys Jimenez
//CSC 381, Lab 8
//Implementation file for a queue structure that holds int values

#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

/* creates a new empty queue structure */
queue *create_queue()
{
  queue *q = (queue *)malloc(sizeof(queue));
  q->first = NULL;
  q->size = 0;
  
  return q;
}

/* returns -1 if the queue is empty */
int is_empty(queue *q)
{
  int empty = 1;
  if(q->first == NULL)
    {
      empty = -1;
    }
    
  return empty;
}

/* returns the number of elements in the queue */
int size(queue *q)
{
  int count = q->size;
  return count;
}

/* returns the last item added to the queue */
int peek(queue *q)
{
  if(is_empty(q) < 0)
  {
    printf("The queue is empty");
    return 0;
  }

  return q->last->value;
}

/* adds an element to the queue */
void enqueue(queue *q, int x)
{
  queue_node *temp = (queue_node *)malloc(sizeof(queue_node));
  temp->value = x;
  temp->next = NULL;
  
  if(q->first == NULL && q->last == NULL)
  {
    q->first = temp;
    q->last = temp;
    q->size += 1;
    return;
  }
  q->last->next = temp;
  q->last = temp;

  q->size += 1;
 
}

/* removes and return the last item recently added */
int dequeue(queue *q)
{
  if(is_empty(q) < 0)
  {
    printf("The queue is empty");
    return 0;
  }

  int value = q->first->value;
  q->first = q->first->next;
  q->size -= 1;
  
  return value;
}

/* prints the values in the queue */
void print_queue(queue *q)
{
  queue_node *temp = q->first;
  while(temp != NULL)
    {
      printf("%d ", temp->value);
      temp = temp->next;
    }
}

/* deallocates the queue */
void deallocate_queue(queue *q)
{
  free(q);
}
