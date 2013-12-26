#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
  
  
int main() {  
    int mat[20][20]; // [34 76 -54 7;-4 5 23 9] n = 2, m = 4  
    int vec[20]; //  [4,-7]  
    int out[20]; // (1*n) * (n*m) = 1*m  
    int n, m,i,j;  
    scanf("%d %d",&n,&m);  
      
    for (i = 0; i < n; i++)  
    {  
        scanf("%d",&vec[i]);  
    }  
    for (i = 0; i < n; i++)  
        for (j = 0; j < m; j++)  
    {  
        scanf("%d",&mat[i][j]);  
    }  
    for (j = 0; j < m; j++)  
    {  
        int sum = 0;  
        for (i = 0; i < n; i++)  
            sum += vec[i] * mat[i][j];  
        out[j] = sum;  
    }  
    for (j = 0; j < m; j++) {  
        printf("%d",out[j]);  
        if (j == m-1)printf("\n");  
        else printf(" ");  
    }
return 0;  
}  
