#include<stdio.h>
int main(){


int n,i,j,found=0;

printf("no of elements:");
scanf("%d",&n);

 int arr[n];
 printf("elements in array\n");
 for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
 }
 printf("array duplication\n");
 for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            printf("%d",arr[i]);
            found=1;
            break;
        }
    }
 }
return 0;
}





    












    


    

