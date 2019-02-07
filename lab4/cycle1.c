#include "ex3.h"
void hare_tort(List* L)
{
List* hare=L;
List* tort=L;
int flag=0;
while(hare->next !=NULL && tort->next !=NULL)
{
List* hare_next=hare->next;
if(hare_next->next !=NULL)
{
  if((hare_next)->next - L <= (tort->next) -L)
   {
   flag=1;
   break;
   }
hare=(hare->next)->next;
tort=tort->next; 
 }
 else
  break;
 }
 if(flag==0)
   printf(" By HARE AND TORTOISE Algorithm, the list is not cyclic\n \n");
  else
    printf(" By H&T Algo., the list is cyclic \n \n");
}       
