#include <stdio.h>
#include <stdlib.h>
int space=0;
int* myalloc(int num_ele)
  {
   int* base= malloc(sizeof(int)*num_ele);
   space+=sizeof(int)*num_ele;
   for(int i=0;i<num_ele;i++)
      *(base+i)=i;  
   return base;
   }
  int* myfree(int *ptr)
  {
  free(ptr);
  space-=sizeof(*ptr);
  return ptr;
  }
  void printArr(int* base,int num_ele)
  {
  for(int i=0;i<num_ele;i++)
   { 
     printf("%d \t",*(base+i));
   }
   printf("\n");
  }
  int main()
  {
  int *base=myalloc(10);
  
  printf("%u\n",base);
  printf("%d\n",space);
  printArr(base,10);
  base=myfree(base);
  printArr(base,10);
  printf("%d\n",space);
  }
