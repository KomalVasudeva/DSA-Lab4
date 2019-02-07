#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList{
int ele;
struct bLinkedList* prev;
struct LinkedList* next;
} List;
List* myalloc(int N);
List* createList(int N);
List* createCycle(List* l,int num);

int testCyclic(List* l);
void hare_tort(List* L);
