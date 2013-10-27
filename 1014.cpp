/**************************************************** 
作　　者: 卢山(2010201496) 
题　　目: 1014.级数求和 (http://you.ruc.edu.cn/yoj/problem.php?id=1014) 
版　　本: version_0 
提交时间: 2013-09-23 09:13:00.0 
 
运行结果: 正确通过 
****************************************************/  
#include <iostream>  
#include <iomanip>  
  
  
using namespace std;  
  
int main(){  
    int k;  
    cin >> k;  
    int n = 0;  
    double term;   
    double sum = 0;  
    do  
    {  
        n=n+1;  
        term  = 1.0/n;  
        sum = sum + term;  
          
    } while (sum <= k);  
      
    cout << n << endl;  
    return 0;  
}  

