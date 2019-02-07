#include "ex3.h"
#include <time.h>
List* myalloc(int num)
{
List* base=malloc(sizeof(List)*num);
return base;
}
List* createList(int n)
{
List *base;
base=myalloc(n);
base->prev=NULL;
base->ele=100 + rand()%900;
base->next=(base+1);
for(int i=1;i<n-1;i++)
{
(base+i)->ele=100+ rand()%900;
(base+i)->prev=(base+i-1);
(base+i)->next=(base+i+1);
}
(base+n-1)->prev=(base+n-2);
(base+n-1)->ele=100+ rand()%900;
(base+n-1)->next=NULL;

return base;

}

void printList(int* base)
{
List* ptr=base;
while(ptr!=NULL)
{
printf("%d\t",ptr->ele);
ptr=ptr->next;
}
}
List* createCycle(List* L,int num)
{
srand(time(0));
int choice=rand()%2;
if(choice == 1)
{
int node_num=rand()%(num-1);
(L+num-1)->next=(L+node_num);
if(node_num !=0)
printf("Node no. %d and %d are now connected \n",node_num+1,num);
else
printf("The list has turned circular !!! \n");
return L;
}
else
{
printf("No change in the List\n");
return L;
}
}

int main()
{
List* l=createList(1000);
printList(l);
createCycle(l,1000);
hare_tort(l);
}


