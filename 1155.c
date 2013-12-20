#include <stdio.h>  
  
  
  
int find(int *a,int n,int satisfy, int*mm)  
{  
    if (n == 1) return satisfy;  
    int max = -10000000;  
    int min = 10000000;  
    int i,j,k,useCount = 0;  
    int used[n*(n-1)/2][2];  
    for (i = 0; i < n; i++)  
        for (j = i+1; j < n;j++)  
        {  
            int usedFlag = 0;  
            for (k = 0; k < useCount; k++)  
            {  
                if ((used[k][0] == a[i] && used[k][1] == a[j]) ||  
                    (used[k][1] == a[i] && used[k][0] == a[j])) {  
                    usedFlag = 1;  
                    break;  
                }  
            }  
            if (usedFlag) continue; // no redundancy  
            used[useCount][0] = a[i]; used[useCount][1] = a[j];  
            useCount++;  
            int num[10],count = 1,current,currentSatisfy;  
            /* 
            printf("i = %d, j = %d, n = %d,satisfy = %d\n",i,j,n,satisfy); 
            printf("a[i]=\n"); 
            for (k = 0; k < n;k++) { 
                printf("%d ",a[k]); 
            } 
            printf("\n"); */  
            num[0] = a[i] + a[j];  
            for (k = 0; k < n;k++) {  
                if (k == i || k == j) continue;  
                else num[count++] = a[k];  
            }  
            /* 
            printf("num[i]=\n"); 
            for (k = 0; k < n-1;k++) { 
                printf("%d ",num[k]); 
            } 
            printf("\n");*/  
            currentSatisfy = satisfy + a[i]*a[j] - a[i] -a[j];  
            current = find(num,n-1,currentSatisfy,mm);  
            if (n == 2 && current < mm[1]) mm[1] = current; // min renew  
            if (n == 2 && current > mm[0]) mm[0] = current; // max renew  
        }  
    //mm[0] = max; mm[1] = min;  
    return min;  
}  
  
  
  
int main()  
{  
    int a[10];  
    int i,k,m,n;  
    int mm[2]={-1000000,1000000}; //max,min  
    k = 10;  
    for (i = 0; i < k; i++)  
        scanf("%d",&a[i]);  
    //m = findMax(a,k,0);  
    //printf("%d",m);  
    n = find(a,k,0,mm);  
    printf("%d\n",mm[0]-mm[1]);  
    return 0;  
} 
