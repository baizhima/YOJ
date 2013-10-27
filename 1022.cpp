/**************************************************** 
作　　者: 卢山(2010201496) 
题　　目: 1022.百钱买百鸡 (http://you.ruc.edu.cn/yoj/problem.php?id=1022) 
版　　本: version_0 
提交时间: 2013-10-09 19:15:52.0 
 
运行结果: 正确通过 
****************************************************/  
#include <iostream>  
#include <fstream>  
#include <iomanip>  
using namespace std;  
  
int main()  
{  
   int n;  
   cin >> n;  
   int jiweng, jimu, jichu;  
   int count = 0;  
   for (int jiweng = 0; jiweng <= n; jiweng++)  
   for (int jimu = 0; jimu <= n - jiweng; jimu++)  
   for (int jichu = 0; jichu <= n-jiweng - jimu;jichu++)  
   {  
       if (jichu%3 != 0)continue;  
       if (5*jiweng + 3*jimu + jichu/3 == n && jiweng + jimu + jichu == n)  
       {  
           cout << jiweng <<" "<< jimu <<" "<< jichu << endl;  
           count += 1;  
       }  
         
   }  
   cout << count << endl;  
     
     
     
     
   return 0;  
}  
