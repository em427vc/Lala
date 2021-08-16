#include <iostream>
#include <cstring>
#include "end.h"
#include <math.h>

#include <stdbool.h>

  

char *encrypt_this(const char *str)
{
  //char *token;
char *omg=(char*)malloc(strlen(str));
char *token=(char*)malloc(2);
  strcpy(omg,str);
   int flag=0;
    token = strtok(omg, " ");
  while(token!=NULL){
 printf( " %s\n", token );
    
      token = strtok(NULL, " ");
      flag++;
  }
 //char **arr=(char*)*malloc(flag*10);

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

 
free(temp);

    return final; // your implementation here ...
  }
}


int main(){

encrypt_this("Abcd 65dcb");

//printf("%d",z);


//88std::cout<<"a"<<std::endl;
//print();

std::cin.get();

}