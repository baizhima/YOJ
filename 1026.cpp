/**************************************************** 
作　　者: 卢山(2010201496) 
题　　目: 1026.迭代法求平方根 (http://you.ruc.edu.cn/yoj/problem.php?id=1026) 
版　　本: version_2 
提交时间: 2013-10-21 11:19:25.0 
 
运行结果: 正确通过 
****************************************************/  
#include <iostream>    
#include <cstdio>  
#include <cmath>  
#include <cstdlib>  
using namespace std;    
    
    
  
    
int main()    
{    
   int a;  
   cin >> a;  
   double x = a/2.0;  
   double diff = 1;  
   int count = 0;  
   while(true)  
   {  
       double x2 = 0.5*(x+a*1.0/x);  
       count++;  
         
       diff = x2 - x;  
       x = x2;  
       if (fabs(diff) < 1e-5)  
       {  
           //count--;  
           break;     
       }  
             
         
         
         
   }  
    printf("%.6f\n",x);  
    cout << count << endl;  
   return 0;    
}    
