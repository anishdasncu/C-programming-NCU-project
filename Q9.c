#include<stdio.h>

int main() {
    int rows,rec=1,enter,i,j;
    printf("enter the no of rows:");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
        for(enter=1;enter<=rows-i;enter++)
        printf(" ");

        for(j=0;j<=i;j++)
        {
            if(j==0||i==0)
              rec=1;
            else
              rec=rec*(i-j+1)/j;

            printf("%4d",rec);
        }
        printf("\n");


        
    }



    return 0;
}



    







    


    

