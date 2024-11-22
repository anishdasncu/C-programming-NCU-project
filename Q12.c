#include<stdio.h>
int main() {
    int marks[6];
    int max,min;
    for(int i=0;i<6;i++){
        printf("the marks of the student\n",i+1);
        scanf("%d",&marks[i]);
    }
        max=marks[0];
        min=marks[0];
        for(int i=1;i<6;i++){
            if(marks[i]>max){
                max=marks[i];
        }

        if(marks[i]<min){ 
            min=marks[i];
        }

     
}
    printf("the maximum marks:%d\n",max);
    printf("the minimum marks:%d\n",min);

    
    return 0;
}



    







    


    

