#include<stdio.h>

int main(){
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    while(b!=0){
        a=a^b;
        printf("The result is:%d\n",a);
    }
    return 0; 
}


