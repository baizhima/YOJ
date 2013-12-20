#include <stdio.h>
void build_matrix(int (*ary)[128],int n)  
{  
   if (n == 1)  
       *(*(ary+ 0) + 0) = 1;  
    else  
    {  
        int i,j;  
        if (n % 2 == 0)  
        {  
            for (i = 0; i < n; i++)  
                *(*(ary+ i) + (n-1)) = (n-1)*(n-1) + i+1;  
            for (j = 0; j < n; j++)  
                *(*(ary+ (n-1)) + j) = n*n - j;  
        }  
        else  
        {  
            for (i = 0; i < n; i++)  
                *(*(ary+ i) + (n-1)) = n*n - i;  
            for (j = 0; j < n; j++)  
                *(*(ary+ (n-1)) + j) = (n-1)*(n-1) + j+1;  
        }  
        build_matrix(ary,n-1);  
    }  
  
}  
int main()
{
    int i, j;
    
    int n;
    int ary[128][128] = {0};
    
    scanf("%d", &n);
    
    build_matrix(ary, n);
    
    for (i = 0; i < n; i ++)
    {
        for (j = 0; j < n; j ++)
            printf("%d ", ary[i][j]);
        printf("\n");
    }
    
    return 0;
}
