/**************************************************** 
作　　者: 卢山(2010201496) 
题　　目: 1009.按要求读入数据并输出 (http://you.ruc.edu.cn/yoj/problem.php?id=1009) 
版　　本: version_0 
提交时间: 2013-10-10 23:46:21.0 
 
运行结果: 正确通过 
****************************************************/  
#include <iostream>  
#include <cstdio>  
#include <fstream>  
  
using namespace std;  
  
int main()  
{  
   //ifstream cin("input.txt");  
   int a,b;  
   char comma;  
   cin >> a  >> comma >> b;  
   cout << a << "," << b << endl;  
   double c,d;  
   cin >> c >> d;  
   printf("%.1f %.1f\n",c,d);  
     
   string line,line2;  
   cin >> line >> line2;  
   cout << ' ';  
   cout << line << " " << line2 <<endl;;  
     
     
     
     
   return 0;  
}  
