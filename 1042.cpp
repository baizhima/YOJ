#include <iostream>    
#include <cstdio>  
#include <cmath>  
#include <cstdlib>  
using namespace std;    
    
    
   
    
    
int main()    
{    
     
  int a,b,c;  
  cin >> a >> b >> c;  
  bool hasAns = false;  
  for (int x = -100; x <= 100; x++)  
    for (int y = -100; y <= 100; y++)  
        for (int z = -100; z <= 100; z++)  
        {  
            if (x == 0 && y == 0 && z == 0)  
            continue;  
            if (x*a+y*b+z*c == 0)  
            {  
                hasAns = true;  
                cout << x << " " << y << " " << z << endl;  
            }  
              
        }  
   if (!hasAns)  
   cout <<"no solution";  
   cout << endl;    
   return 0;    
}    
