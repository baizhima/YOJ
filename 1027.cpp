  
#include <iostream>    
#include <cstdio>  
#include <cmath>  
#include <cstdlib>  
using namespace std;    
    
    
int main()    
{    
   int n;  
   cin >> n;  
   int a[n];  
   for (int i = 0; i <n;i++)  
    scanf("%d",&a[i]);  
    for (int i = 0; i <n;i++)  
    {  
        cout << a[n-i-1];  
        if (i != n-1)  
        cout << " ";  
        else  
        cout << '\n';  
    }  
      
   return 0;    
}    
