/**************************************************** 
作　　者: 卢山(2010201496) 
题　　目: 1015.计算cosx的近似值 (http://you.ruc.edu.cn/yoj/problem.php?id=1015) 
版　　本: version_2 
提交时间: 2013-10-20 21:58:36.0 
 
运行结果: 正确通过 
****************************************************/  
#include<iostream>  
#include<cmath>//fabs()  
using namespace std;  
int main()  
{    
   double pi = 3.14159265;  
   double x,s,a,epsilon;  
   cin >> x >> epsilon;  
   // sin part  
   do  
   {  
       x -= 2*pi;  
   }while(x > 2*pi);// || x < -2*pi)  
   do  
   {  
       x += 2*pi;  
   }while(x < -2*pi);  
     
   s = x;  
   a = x;  
   for (int i = 1;;i+=2)  
   {  
       a *= x * x * (-1) / ((i+1)*(i+2));  
       //cout << fabs(a) << endl;  
       if(fabs(a)<epsilon) break;  
       s += a;  
         
   }  
   cout << s << endl;  
     
