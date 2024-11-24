#include<stdio.h>
void cyclicRotate(int arr[],int n){
    int last=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]-arr[i-1];
    }
    arr[0]=last;
}
void printarray(int arr[],int n){
    for(int i=0; i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");

}
int main(){
    int n;
    printf(" no of elements in array:");
    scanf("%d",&n);
    int arr[n];
    printf("elements in array:");
    for( int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("before rotation\n:");

    printarray(arr,n);

    cyclicRotate(arr,n);

    printf("after rotation\n:");

    printarray(arr,n);

    return 0;
    
}












    


    

