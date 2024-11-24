#include<stdio.h>
int main() {
    int marks[6];
    int sum=0;
    float avg;
    for(int i=0;i<6;i++){
      printf("enter the marks of the student\n",i+1);
      scanf("%d",&marks[i]);
    }
    for(int i=0;i<6;i++){
      sum+=marks[i];

    }
    avg=sum/6;
    printf("average of the all marks:%.2f\n",avg);


    return 0;
}



    







    


    

