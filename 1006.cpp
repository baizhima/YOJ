/**************************************************** 
作　　者: 卢山(2010201496) 
题　　目: 1006.浮点数求和 (http://you.ruc.edu.cn/yoj/problem.php?id=1006) 
版　　本: version_0 
提交时间: 2013-09-23 08:57:49.0 
 
运行结果: 正确通过 
****************************************************/  
#include <iostream>  
#include <iomanip>  
#include <cmath>  
  
using namespace std;  
  
int main(){  
    double a,b;  
    cin >> a >> b;  
      
   cout<<setiosflags(ios::fixed);   
    cout << setprecision(2);  
    cout << a+b << endl;  
    return 0;  
}  

