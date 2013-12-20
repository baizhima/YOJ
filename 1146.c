#include<stdio.h>  
#include<string.h>  
#include<stdlib.h>  
  
  
int onlyZeroOne(int product)  
{  
    int remainder;  
    while (product > 0)  
    {  
        remainder = product % 10;  
        if (remainder != 0 && remainder != 1) return 0;  
        product = product / 10;  
    }  
    return 1;  
}  
  
int main()  
{  
    // 3  
    // 300 1000  
    // 700 1200  
    // 1500 2100  
      
    int n,m,product;  
    scanf("%d",&n);  
    m = 1;  
    while (m <= 30000)  
    {  
        product = n*m;  
        if (onlyZeroOne(product))break;  
        m++;  
    }  
    if (m > 30000)  
        printf("NO\n");  
    else  
        printf("%d\n",m);  
      
      
    return 0;  
} 
