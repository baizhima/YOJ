#include <stdio.h>  
  
  
  
int findMin(int (*table)[8],int col)  
{  
    int a[8];  
    int i,j;  
    for (i = 0; i < 8; i++)  
        a[i] = *(*(table + i) + col);  
    for (i = 0; i < 8; i++)  
        for (j = 7; j > i; j--)  
            if (a[j] < a[j-1])  
            {  
                int temp = a[j-1];  
                a[j-1] = a[j];  
                a[j] = temp;  
            }  
    return a[0];  
}  
  
int main()  
{  
    int price[8] = {100,200,500,1000,1000,600,600,2000};  
    int table[8][8] = {  
        {100,500,1000000,10000,200,500,400,1200},  
        {20,100,1000000,10000,300,1000000,1000000,1000000},  
        {10,8,100,17,22,200,1000,3000},  
        {1,1,1000000,100,1,2000,1500,5000},  
        {50,33,1000000,10000,100,50,30,70},  
        {20,5,50,5,200,100,50,400},  
        {50,20,10,7,350,200,100,1000},  
        {8,5,10,10,200,30,20,100}};  
      
    int cheap[8] = {0};  
    int input[8];  
    int i,j,sum = 0;  
    for (i = 0; i < 8; i++) // row  
        for (j = 0; j < 8; j++) // col  
        {  
            table[i][j] *= price[i];  
        }  
      
    for (j = 0; j < 8; j++)  
        cheap[j] = findMin(table,j);  
    /* see input and sort 
    for (i = 0; i < 8; i++) // row 
        for (j = 0; j < 8; j++) // col 
        { 
            printf("%10d ",table[i][j]); 
            if (j == 7)printf("\n"); 
        } 
     
    for (j = 0; j < 8; j++) 
        printf("%d ",cheap[j]); 
    */  
    for (i = 0; i < 8; i++)  
    {  
        scanf("%d",&input[i]);  
        sum += input[i]/100*cheap[i];  
    }  
    printf("%d\n",sum);  
    return 0;  
}  
