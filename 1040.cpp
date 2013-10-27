#include <iostream>  
#include <fstream>  
using namespace std;  
  
int main()  
{  
   //ifstream cin("input.txt");  
   int n; // number of swimmers  
   int a,b;  
   int revenue = 0;  
   cin >> n;  
   for (int i = 0; i < n;i++)  
   {  
       cin >> a >> b;  
       if (b<10 || b>20) continue;  
       if (a == 0)  
       {  
           if (b >=12 && b <= 16)  
           revenue += 8;  
           else if (b>=16)  
           revenue += 10;  
       }  
       if (a == 1)  
       revenue += 30;  
   }  
   cout << revenue << endl;  
     
   return 0;  
}  
