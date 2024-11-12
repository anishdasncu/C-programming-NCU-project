#include<stdio.h>
#include<math.h>
int main(){
    int sum;
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int r=n;
    while(n!=10){
        int r=n%10;
        sum=pow(r,1)+sum;
        n=n/10;
        printf("%d\n",sum);
        if(sum==n){
            printf("it is a armstrong number\n");
        }
        else{
            printf("it is not a armstrong number\n");
        }
    


}




    


     return 0; 
}


