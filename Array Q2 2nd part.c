#include<stdio.h>
int main(){

     int marks[5]={};
     int i=0;
     for(i=0;i<6;i++){
          printf("Enter the marks of the student\n");
          scanf("%d",&marks[i]);

     }

     printf("Enter the 5 student marks\n");


     
     for(i=0;i<6;i++){
          printf("\n Marks=%d Array[%d]=[%d]\n",i,i,marks[i]);
          if(marks[i]>=40 && marks[i]<=59){
               printf("Grade C\n");
          }
          
          

     }

     
     
     return 0;
}


