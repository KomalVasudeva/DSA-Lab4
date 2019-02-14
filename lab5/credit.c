#include "credit.h"
#include <string.h>
int main()
{
  int limit=100;
  Card* list=malloc(sizeof(Card)*limit);
  int num=0;
  FILE* ptr;
  ptr=fopen("input","r");
    
    //char *s=malloc(sizeof(char)*40);
    char s[30];
   fscanf(ptr,"%[^,\n]",s);
   printf("%d\n",num);
  while(s!=NULL)
   {
      if(num>=limit)
      {
       limit*=2;
       list=realloc(list,sizeof(Card)*limit);
      }
      int i=0;
      if(i==0)
        {
        list[num].CardNum=atoll(s);
         i++;
        }      
      if(i==1)
       {
       fscanf(ptr,"%[^,]",s);
      strcpy(list[num].bank_code,s);
       i++;
       }
      if(i==2)
       {
       //token=strtok(NULL,s);
       fscanf(ptr,"%[^,]",s); 
       strcpy(list[num].expiry,s);
       i++;       
       }
      if(i==3)
       {
       //token=strtok(NULL,s); 
       fscanf(ptr,"%[^,]",s);
       strcpy(list[num].fname,s);
       i++;
       }
      if(i==4) 
       {
       //token=strtok(NULL,s);
       fscanf(ptr,"%[^\n]",s);
       strcpy(list[num].lname,s);
       i=0;
       num++;
       }  
  }
}    
