/**************************************************** 
作　　者: 卢山(2010201496) 
题　　目: 1010.温度转换 (http://you.ruc.edu.cn/yoj/problem.php?id=1010) 
版　　本: version_0 
提交时间: 2013-10-09 19:08:23.0 
 
运行结果: 正确通过 
****************************************************/  
#include <iostream>  
#include <fstream>  
#include <iomanip>  
using namespace std;  
  
int main()  
{  
   int f;  
   cin >> f;  
   double c = 5/9.0*(f-32);  
   cout << setprecision(2)<<std::fixed << c << endl;  
     
     
     
     
   return 0;  
}  

