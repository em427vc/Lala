#include <stdlib.h>
#include <stdio.h>

#include <math.h>
#include <string.h>
#include <stdbool.h>

/*
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
    
    int ix=0;
    char delim[] = " ";
    char str2[strlen(str)];
    char *arr[3];
    strcpy(str2,str);

	arr[ix] = strtok(str2,delim); //musi byt char arr[10], nie const char *ptr

while(arr[ix]!=NULL)
{
   arr[++ix] = strtok(NULL,delim);
}
printf("\n '%s'\n", arr[0]);
printf("\n '%s'\n", arr[1]);
printf("\n '%s'\n", arr[2]);

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
  */

  char *enc( const char *str){
bool oneword=false;
    char buff[10];
    char buff2[10];
    strcpy(buff2,str);
  char *word=strtok(buff2," ");
  char *word2=strchr(str,' ');
//  printf("**%s\n ",word2);
  
  
  // first
     char *reverse=strrev(buff2);
     strcpy(buff2,reverse);
     buff2[strlen(reverse)-1]=NULL;
     sprintf(buff,"%d%s ",str[0],buff2);
  //  printf("%s\n",buff);
    char *ptr=(char*)malloc(30);

// second
    char secondBuff[10];
    char secondBuff2[10];
   strcpy(secondBuff2,word2);
 
   char *secondReverse=strrev(secondBuff2);
   secondBuff2[strlen(secondReverse)-2]=NULL;
    // printf("**%c\n ",word2[1]);

   sprintf(secondBuff,"%d%s ",word2[1],secondBuff2);
   // printf("%s\n",secondBuff);




//printf("%c  %c \n",first,last);
char final[30];
sprintf(final,"%s%s",buff,secondBuff);
//printf("*%c  %c\n",final[0],final[14]);
char *ptrs=final;

//printf("%s \n",ptrs);


if(word2!=NULL){
  ptr=final;
  }
  else{
    ptr=buff;
    printf("flag");
  }
 //ptr=final;
printf("%s \n",ptr);
return ptr;

  }
 
  int main(){
char *a;
  a=enc("hello world");
 //  printf("%s",a);
 // free(ptr);
}