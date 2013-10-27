/**************************************************** 
作　　者: 卢山(2010201496) 
题　　目: 1005.切换字符大小写 (http://you.ruc.edu.cn/yoj/problem.php?id=1005) 
版　　本: version_1 
提交时间: 2013-09-23 08:26:26.0 
 
运行结果: 正确通过 
****************************************************/  
#include <iostream>  
  
  
using namespace std;  
  
int main(){  
    char c ;  
    cin >> c;  
    if (c >= 'a' && c <='z')  
        c = c - 32;  
    else if (c >= 'A' && c <='Z')  
        c = c + 32;  
    cout << c << endl;  
}  

