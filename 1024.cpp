/**************************************************** 
作　　者: 卢山(2010201496) 
题　　目: 1024.订票优惠率 (http://you.ruc.edu.cn/yoj/problem.php?id=1024) 
版　　本: version_0 
提交时间: 2013-10-11 00:12:15.0 
 
运行结果: 正确通过 
****************************************************/  
#include <iostream>  
#include <cstdio>  
#include <fstream>  
  
using namespace std;  
  
int main()  
{  
   int m,n;  
   cin >> m >> n;  
   if (m >=7 && m <=9){  
   if(n>=20)  
   cout << "10%" << endl;  
   else  
   cout << "5%" << endl;  
   }  
   else  
   {  
       if(n>=20)  
       cout << "20%" << endl;  
       else  
       cout << "10%" << endl;  
         
   }  
     
     
   return 0;  
}  
