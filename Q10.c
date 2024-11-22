#include<stdio.h>
int main() {
    int marks[6];
    int sum=0;
    int avg;
    for(int i=0;i<6;i++){
      printf("enter the marks of the student\n",i+1);
      scanf("%d",&marks[i]);
    }
    for(int i=0;i<6;i++){
      sum+=marks[i];
    }
    printf("sum of the all scores:%d\n",sum);
    avg=sum/6;
    printf("the average of the scores:%d\n",avg);


    return 0;
}



    







    


    

