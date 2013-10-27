/**************************************************** 
作　　者: 卢山(2010201496) 
题　　目: 1021.判断素数 (http://you.ruc.edu.cn/yoj/problem.php?id=1021) 
版　　本: version_2 
提交时间: 2013-10-25 22:33:52.0 
 
运行结果: 正确通过 
****************************************************/  
#include <iostream>  
#include <cmath>  
using namespace std;  
  
  
  
bool isPrime(int n)  
{  
    if (n == 2)  
    return true;  
      
    if (n % 2 == 0 || n == 1)  
    return false;  
    else  
    {  
        for (int i = 3; i <= sqrt(n);i=i+2)  
        {  
            if (n % i == 0)  
            return false;  
        }  
        return true;  
    }  
      
}  
  
int main() {  
    // Start typing your code here...  
   int n;  
   cin >> n;  
   for (int i = 0; i < n; i++)  
   {  
       int num;  
       cin >> num;  
       if (isPrime(num))  
       cout << "YES";  
       else  
       cout << "NO";  
         
       if (i<n-1)  
       cout <<" ";  
       else  
       cout << "\n";  
   }  
      
      
    return 0;  
}  
