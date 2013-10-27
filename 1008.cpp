/**************************************************** 
作　　者: 卢山(2010201496) 
题　　目: 1008.计算学分绩点 (http://you.ruc.edu.cn/yoj/problem.php?id=1008) 
版　　本: version_0 
提交时间: 2013-09-23 08:16:46.0 
 
运行结果: 正确通过 
****************************************************/  
#include <iostream>  
using namespace std;  
  
int main(){  
int score;  
cin >> score;  
if (score >= 90)  
 cout << "4.0" << endl;  
else if (score >= 86 && score <= 89)  
 cout << "3.7" << endl;  
else if (score >= 83 && score <= 85)  
 cout << "3.3" << endl;  
else if (score >= 80 && score <= 82)  
 cout << "3.0" << endl;  
else if (score >= 76 && score <= 79)  
 cout << "2.7" << endl;  
else if (score >= 73 && score <= 75)  
 cout << "2.3" << endl;  
else if (score >= 70 && score <= 72)  
 cout << "2.0" << endl;  
else if (score >= 66 && score <= 69)  
 cout << "1.7" << endl;  
else if (score >= 63 && score <= 65)  
 cout << "1.3" << endl;  
else if (score >= 60 && score <= 62)  
 cout << "1.0" << endl;  
else  
 cout << "0" << endl;  
return 0;  
}  

