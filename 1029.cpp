/**************************************************** 
作　　者: 卢山(2010201496) 
题　　目: 1029.教室排课 (http://you.ruc.edu.cn/yoj/problem.php?id=1029) 
版　　本: version_1 
提交时间: 2013-10-21 10:42:52.0 
 
运行结果: 正确通过 
****************************************************/  
// Type your C++ code and click the "Run Code" button!  
// Your code output will be shown on the left.  
// Click on the "Show input" button to enter input data to be read (from stdin).  
  
#include <iostream>    
#include <cstdio>  
#include <cmath>  
#include <cstdlib>  
using namespace std;    
    
    
bool checkRepeat(int a,int b,int c,int d)  
{  
    if (a == b || a == c || a == d || b == c || b == d || c == d)  
    return false;  
    else  
    return true;  
}  
    
    
int main()    
{    
  int na,nb,nc,nd;  
  cin >> na >> nb >> nc >> nd;  
  int cap[9]={0,120,40,85,50,100,140,70,100};  
  bool hasAns = false;  
  for (int a = 1; a <= 8; a++)  
    for (int b = 1; b <= 8; b++)  
        for (int c = 1; c <= 8; c++)  
            for (int d = 1; d <= 8; d++)  
            {  
                if (na <= cap[a] && nb <= cap[b] && nc <= cap[c] && nd <= cap[d])  
                {  
                    bool possible = checkRepeat(a,b,c,d);  
                    if (possible)  
                    {  
                        hasAns = true;  
                        cout << a <<" " << b << " " << c << " " << d << endl;  
                    }  
                      
                }  
            }  
    if (!hasAns)  
    cout << "-1" << endl;  
   return 0;    
}    
