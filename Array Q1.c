#include<stdio.h>
int main(){

     int marks[5]={};
     int i=0;
     int flag=0;
     for(i=0;i<6;i++){
          printf("enter the marks of the student\n");
          scanf("%d",&marks[i]);

     }

     printf("enter the 5 student marks\n");


     for(i=0;i<6;i++){
          printf("\n marks=%d array[%d]=[%d]\n",i,i,marks[i]);
          if(marks[i]>=75){
               printf("Grade A\n");
          }
          
          

     }

     
     
     return 0;
}


