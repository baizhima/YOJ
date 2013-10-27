/**************************************************** 
作　　者: 卢山(2010201496) 
题　　目: 1012.水仙花数 (http://you.ruc.edu.cn/yoj/problem.php?id=1012) 
版　　本: version_0 
提交时间: 2013-09-23 09:28:38.0 
 
运行结果: 正确通过 
****************************************************/  
#include <iostream>  
#include <iomanip>  
#include <cmath>  
  
using namespace std;  
  
int main(){  
    int n,m;  
    cin >> n >> m;  
    //n = 100; m= 154;  
    int num[1000];  
    int count = 0;  
    for (int i = n; i <= m; i++)  
    {  
        int hundred = i/100;  
        int ten = (i - hundred*100)/10;  
        int unit = i - hundred*100 - ten*10;  
        //cout << hundred <<","<< ten <<","<< unit << endl;  
        if (hundred*hundred*hundred + ten*ten*ten+unit*unit*unit == i)  
        num[count++] = i;  
    }  
    for (int i = 0; i < count-1; i++)  
    cout << num[i] <<" ";  
    cout << num[count-1] << endl;  
      
    return 0;  
}  
