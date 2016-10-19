//Nerys Jimenez Pichardo
//The College of Saint Rose
//November 6, 2015
//Programming in Unix with C
//Header file for a queue structure that holds int values

typedef struct queue_node
{
  int value;
  struct queue_node *next;
} queue_node;
typedef struct queue 
{
  struct queue_node *first;
  struct queue_node *last;
  int size;
}queue;

extern queue *create_queue();
extern int is_empty(queue *q);
extern int size(queue *q);
extern int peek(queue *q);
extern void enqueue(queue *q, int value);
extern int dequeue(queue *q);
extern void print_queue(queue *q);
extern void deallocate_queue(queue *q);
