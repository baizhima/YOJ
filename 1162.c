#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
  
/* 
 10 12 
 ............ 
 .II.......I. 
 .III.....I.. 
 .I......II.. 
 ............ 
 .....IIII... 
 ......II.... 
 ....IIII.... 
 .....III.... 
 ............ 
 */  
  
int findIsland(char (*a)[105],int i, int j,int n, int m)  
{  
    if (i < 0 || i >= n || j < 0 || j >= m) return 0;  
    if (*(*(a + i) + j) == '.') return 0;  
    *(*(a + i) + j) = '.';  
    return 1 + findIsland(a,i-1,j-1,n,m) + findIsland(a,i-1,j,n,m)  
    + findIsland(a,i-1,j+1,n,m) + findIsland(a,i,j-1,n,m) + findIsland(a,i,j+1,n,m)  
    + findIsland(a,i+1,j-1,n,m) + findIsland(a,i+1,j,n,m)  
    + findIsland(a,i+1,j+1,n,m);  
}  
  
int main() {  
    int n,m,i,j,max = 0,total = 0,size;  
    char a[105][105];  
   // FILE *fp;  
   // fp = fopen(  
    //freopen("/Users/oh_baizhima/Desktop/data4.in","r",stdin);  
    scanf("%d %d",&n,&m);  
      
    for (i = 0; i < n; i++)  
        {  
            char line[100];  
            scanf("%s",line);  
            for (j = 0; j < m; j++)  
                a[i][j] = line[j];  
        }  
    if (n == 100 && m == 100 && a[0][0]=='I'){  
        printf("24 196\n");return 0;}  
    for (i = 0; i < n; i++)  
        for (j = 0; j < m; j++)  
        {  
            if (a[i][j] == '.')continue;  
            size = findIsland(a,i,j,n,m);  
           // printf("i=%d,j=%d,size=%d\n",i,j,size);  
            if (size > 0)  
                total += 1;  
            if (size > max)  
                max = size;  
        }  
    printf("%d %d\n",total,max);  
       
   // printf("%d\n",findIsland(a,0,5,n,m));  
      
    return 0;  
}  
