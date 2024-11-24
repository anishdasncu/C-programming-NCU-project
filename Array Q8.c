#include<stdio.h>

int isprime(int num){
    if(num<=1)
    return 0;
    for(int i=2;i*i<=num;i++){
        if(num%i==0)
        return 0;
    }
    return 1;

}
int main(){
    int n, primecount=0;
    printf("number of elemnts in array:");
    scanf("%d",&n);
    int arr[n];
    printf("elements in the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(isprime(arr[i])){
            primecount++;
        }
    }
    printf("number of prime numbers:%d\n",primecount);

    return 0;
}







    


    

