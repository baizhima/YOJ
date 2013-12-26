#include<stdio.h>  
#include<string.h>  
#include<stdlib.h>  
  
  
  
int main()  
{  
    // 3  
    // 300 1000  
    // 700 1200  
    // 1500 2100  
      
      
    int i,j,n, a[5001][2],b[5001],pl,pr,min,max,left;  
    int comp ( const void *a, const void *b );  
    scanf("%d",&n);  
    scanf("%d %d",&a[0][0], &a[0][1]);  
    //fscanf(fp,"%d",&n);  
    //fscanf(fp,"%d %d",&a, &b);  
    pl = a[0][0];  
    pr = a[0][1];  
    //intervals[0].a = a; intervals[0].b = b;  
      
    max = 0;  
    for (i = 1; i < n; i++)  
    {  
        scanf("%d %d",&a[i][0], &a[i][1]);  
        //fscanf(fp,"%d %d",&a, &b);  
        //intervals[i].a = a; intervals[i].b = b;  
               
    }  
    qsort(a,n,sizeof(int)*2,comp);  
    /* 
    for (i = 0; i < n; i++) 
        for (j = n - 1; j > i; j--) 
        { 
            if (intervals[j].a < intervals[j-1].a) 
            { 
               struct Interval temp = intervals[j]; 
                intervals[j] = intervals[j-1]; 
                intervals[j-1] = temp; 
            } 
        } 
    */  
    //for (i = 0; i < n; i++)  
        //printf("%d:%d %d\n",i,a[i][0],a[i][1]);  
    min = 0;  
    for (i = 0; i < n-1;i++){  
        if(a[i][1] < a[i+1][0]){  
            if(a[i+1][0] - a[i][1] > min)  
            min = a[i+1][0]- a[i][1];  
        }  
    }  
    left = a[0][0];  
    for (i = 0; i < n-1; i++) {  
        if(a[i][1] < a[i+1][0]) { // duan le  
            if (a[i][1] - left > max) {  
                max = a[i][1]- left;  
                //printf("1a[i][1], left = %d %d\n",a[i][1], left);  
                  
            }  
            left = a[i+1][0];  
        }  
        else if (i == n-2)  
        {  
            if (max < a[i+1][1] - left) {  
                max = a[i+1][1]- left;  
                //printf("2a[i+1][1], left = %d %d\n",a[i+1][1], left);  
            }  
        }  
              
    }  
    printf("%d %d",max,min);  
}  
int comp ( const void *a, const void *b )  
  
{  
    return ( ( int * ) a ) [0] - ( ( int * ) b ) [0];  
} 
