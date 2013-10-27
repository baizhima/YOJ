/**************************************************** 
作　　者: 卢山(2010201496) 
题　　目: 1007.求三角形面积 (http://you.ruc.edu.cn/yoj/problem.php?id=1007) 
版　　本: version_10 
提交时间: 2013-10-10 18:26:38.0 
 
运行结果: 正确通过 
****************************************************/  
#include <stdio.h>  
#include <string.h>  
#include <math.h>  
  
int main()  
{  
   int a,b,c;  
   scanf("%d %d %d",&a,&b,&c);  
   double q;  
   q = (a+b+c)/2.0;  
   double area;  
   area = sqrt(q*(q-a)*(q-b)*(q-c));  
   int aa;  
   aa = area;  
   if (area - (int)area > 0.5)  
   aa = (int)area + 1;  
   printf("%d\n",aa);  
   return 0;  
     
}  


