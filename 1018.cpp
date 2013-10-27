/**************************************************** 
作　　者: 卢山(2010201496) 
题　　目: 1018.奇怪的数列 (http://you.ruc.edu.cn/yoj/problem.php?id=1018) 
版　　本: version_1 
提交时间: 2013-10-21 08:53:26.0 
 
运行结果: 正确通过 
****************************************************/  
#include <iostream>    
    
using namespace std;    
    
    
   
    
    
int main()    
{    
     
   int A,B,n;  
   cin >> A >> B >> n;  
   int f[n+1];  
   f[1] = 1;  
   f[2] = 1;  
   for (int i = 3; i <n+1;i++)  
       f[i] = (A*f[i-1]+B*f[i-2])%7;  
     
     
   //for (int i = 1; i < n+1; i++)  
   cout << f[n] << endl;  
       
   return 0;    
}    

