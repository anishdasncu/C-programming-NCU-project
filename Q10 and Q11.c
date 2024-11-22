#include<stdio.h>
int main() {
    int marks[7];

    for(int i=0;i<6;i++){
      printf("enter the marks of the student\n",i+1);
      scanf("%d",&marks[i]);

      if(marks[i]%2==0){
        printf("the score is even:%d\n",marks[i]);
    }
    else{
        printf("the score is odd:%d\n",marks[i]);
    }
    }
    return 0;
}



    







    


    

