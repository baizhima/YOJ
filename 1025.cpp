/**************************************************** 
作　　者: 卢山(2010201496) 
题　　目: 1025.乌龟旅行 (http://you.ruc.edu.cn/yoj/problem.php?id=1025) 
版　　本: version_0 
提交时间: 2013-10-21 10:06:02.0 
 
运行结果: 正确通过 
****************************************************/  
#include <iostream>    
#include <cstdio>  
#include <cmath>  
#include <cstdlib>  
using namespace std;    
    
    
   
    
    
int main()    
{    
     
   int n,m;  
   cin >> n >> m;  
   double sum = 0;  
   for (int i = 1; i <=n; i++)  
   {  
       sum += 1.0/i;  
   }  
     
   double sum2 = 0;  
   int count = 0;  
     
   while(sum2 < m)  
   {  
       sum2 += 1.0/(count+1);  
       count++;  
   }  
     
     
   printf("%.2f\n",sum);  
   cout << count << endl;  
       
   return 0;    
}    
