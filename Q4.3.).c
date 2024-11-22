#include<stdio.h>
int main(){
    int num=0;
    int sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num && num!=0){
        printf("\n \n It is a perfect number:%d\n \n",num);
    }else{
        printf("\n \n It is not a perfect number:%d\n \n",num);
    }

    


    
    return 0; 
}


