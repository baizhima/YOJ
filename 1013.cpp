/**************************************************** 
作　　者: 卢山(2010201496) 
题　　目: 1013.计算约数 (http://you.ruc.edu.cn/yoj/problem.php?id=1013) 
版　　本: version_0 
提交时间: 2013-10-09 19:24:22.0 
 
运行结果: 正确通过 
****************************************************/  
#include <iostream>  
#include <fstream>  
#include <cmath>  
using namespace std;  
  
int main()  
{  
   int n;  
   cin >> n;  
   for (int i = 1; i <= n; i++)  
   {  
       if (n%i == 0)  
       cout <<i <<" ";  
   }  
   cout << endl;  
     
     
     
   return 0;  
}  
