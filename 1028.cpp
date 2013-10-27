#include <iostream>    
#include <cstdio>  
#include <cmath>  
#include <cstdlib>  
using namespace std;    
    
    
   
    
    
int main()    
{    
     
   char ch[10];  
   char c;  
   int idx = 0;  
   int number = 0;  
   bool neg = false;  
     
   c = getchar();  
   if(c == '-')  
   neg = true;  
   else  
   ch[idx++] = c;  
     
   while((c = getchar()) <= '9' && c >='0')  
   {  
       ch[idx++] = c;  
   }  
     
   for (int i = 0; i < idx;i++)  
   {  
       int digit = ch[i]-'0';  
       //cout << digit << endl;  
       number += digit*pow(10.0,i);  
   }  
   if(neg)  
   number *= -1;  
   cout << number << endl;  
       
   return 0;    
}    
