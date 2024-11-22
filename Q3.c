#include<stdio.h>
int main(){
    int a,b,rec;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    rec=a;
    a=b;
    b=rec;
    printf("\n After swapping of two no's:a=%d,b=%d\n",a,b);

    
    return 0; 
}


