#include <iostream>  
#include <fstream>  
#include <cmath>  
using namespace std;  
  
int main()  
{  
   //ifstream cin("input.txt");  
   int n,m; // n rows, m columns  
   cin >> n >> m;  
   for (int i = 1; i <= n; i++)  
   for (int j = 1; j <= m; j++)  
   {  
       char c = 'A' + abs(i-j);  
       cout << c;  
       if (j == m)  
       cout << endl;  
   }  
     
     
     
   return 0;  
}  

