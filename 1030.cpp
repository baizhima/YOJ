#include <iostream>    
#include <cstdio>  
#include <cmath>  
#include <cstdlib>  
using namespace std;    
    
    
  
    
int main()    
{    
   char str[1020];  
   scanf("%s",&str);  
   int len = strlen(str);  
   //printf("%s\n",str);  
   //cout << len << endl;  
   bool huiwen = true;  
     
    for (int i = 0; i < len/2;i++)  
    {  
       if (str[i] != str[len-1-i])  
       {  
           huiwen = false;  
           break;  
       }  
         
    }  
     
   if (huiwen)  
   cout << "Yes" << endl;  
   else  
   cout << "No" << endl;  
   return 0;    
}    
