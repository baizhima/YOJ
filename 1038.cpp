#include <iostream>  
  
using namespace std;  
  
int main()  
{  
   int a,b;  
   cin >> a >> b;  
   int max = a;  
   if (b>a)  
   max = b;  
   while(1)  
   {  
       if (max%a == 0 && max%b == 0)break;  
       max++;  
   }  
   cout << max << endl;  
     
   return 0;  
}  
