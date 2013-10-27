/**************************************************** 
作　　者: 卢山(2010201496) 
题　　目: 1023.爱因斯坦的阶梯问题 (http://you.ruc.edu.cn/yoj/problem.php?id=1023) 
版　　本: version_0 
提交时间: 2013-10-21 10:11:08.0 
 
运行结果: 正确通过 
****************************************************/  
  
#include <iostream>    
#include <cstdio>  
#include <cmath>  
#include <cstdlib>  
using namespace std;    
    
    
   
    
    
int main()    
{    
     
   int n;  
   cin >> n;  
   bool hasAns = false;  
   for (int i = 1; i <n; i++)  
   {  
       if (i % 2 == 1 && i % 3 == 2 && i%5 == 4 && i%6 == 5 && i%7 == 0)  
       {  
           hasAns = true;  
           cout << i << endl;  
       }  
         
         
   }  
   if (!hasAns)  
   cout << "No answer" << endl;  
     
     
       
   return 0;    
}    
