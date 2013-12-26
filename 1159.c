#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
  
int isPrime(int n) {  
    if (n == 2) return 1;  
    if (n % 2 == 0) return 0;  
    int i;  
    for (i = 3; i <= sqrt(n); i+=2)  
        if (n % i == 0) return 0;  
    return 1;  
}  
  
int main() {  
    int n;  
    scanf("%d",&n);  
    int p = 2;  
    while (1)  
    {  
        if (n % p == 0)  
        {  
            printf("%d\n",n/p);  
            break;  
        }  
        p++;  
    }  
    return 0;  
}  
