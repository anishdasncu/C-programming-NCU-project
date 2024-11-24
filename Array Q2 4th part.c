#include<stdio.h>
int main(){

     int marks[6]={};
     char f_name[6][20];
     int i=0;
     int count=0;
     for(i=0;i<6;i++){
          printf("Enter the marks of the student\n");
          scanf("%d",&marks[i]);
          printf("Enter the name of the student\n");
          scanf("%s",&f_name[i]);
          
          }
          printf("students who scored 99 marks\n");
          

     
     for(i=0;i<6;i++){
        if(marks[i]==99){
            printf("name=%s\n",f_name);
            count++;
        }

     }
     printf("total students scored 99:%d\n",count);

    
     return 0;
}

     


