#include <iostream>  
  
using namespace std;  
  
int main()  
{  
   int a,b;  
   int count = 0;  
   cin >> a >> b;  
   for (int i = a; i <= b; i++)  
   {  
       if (i%400 == 0 ||(i%4 == 0 && i%100 !=0) )  
       count += 1;  
         
   }  
   cout << count << endl;  
     
   return 0;  
}  
