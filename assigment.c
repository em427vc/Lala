

#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

char *encrypt_this(const char *str)
{
char *final=(char*)malloc(strlen(str));
  char *temp=(char*)malloc(strlen(str));
  char second,last;
  int len=strlen(str)-1;
  
  if(len==0) {
    sprintf(final,"%d",str[0]); 
    printf("%s\n",final);
    return final;
  }
  if(str==""){
 strcpy(final,"");
 printf("short %s\n",final);
 return final;
  }
  else{
   second=str[1];
   last=str[len];
   strcpy(temp,str+2);
   printf("temps  %s \n",temp);
   int len2=strlen(temp)-1;
   temp[len2]=second;

   sprintf(final,"%d%c%s",str[0],last,temp); 
  
   
    //printf("%c  %c  %c %c\n",str[0],str[1],str[2],str[3]);
  printf("%c  %c  %c \n",final[0],final[1],final[2]);

   printf("second is: %c \n",second);
   printf("LAST is: %c \n",last);
  
   
   printf("%s\n",final);



    return final; // your implementation here ...
  }
}