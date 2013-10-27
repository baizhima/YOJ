/**************************************************** 
作　　者: 卢山(2010201496) 
题　　目: 1019.鹿死谁手 (http://you.ruc.edu.cn/yoj/problem.php?id=1019) 
版　　本: version_0 
提交时间: 2013-10-11 00:09:08.0 
 
运行结果: 正确通过 
****************************************************/  
#include <iostream>  
#include <cstdio>  
#include <fstream>  
  
using namespace std;  
  
int main()  
{  
   int n;  
   cin >> n;  
   bool argue[8];  
   //int val[8]={0,0,0,0,0,0,0,0};  
   //             a b c d e f g h  
   //             0 1 2 3 4 5 6 7  
     
   int solutionCount = 0;;  
   char correctChar;  
     
   for (int i = 0; i < 8;i++)  
   {  
       int val[8]={0,0,0,0,0,0,0,0};  
       val[i] = 1;  
       argue['A'-'A'] = (val[5] == 1 || val[7] == 1); // h or f  
    argue['B'-'A'] = (val[1] == 1); // b  
   argue['C'-'A'] = (val[6] == 1); // g  
   argue['D'-'A'] = (val[1] == 0); // not b  
   argue['E'-'A'] = !(val[5] == 1 || val[7] == 1); // opposite to A's argument  
   argue['F'-'A'] = (val[5] == 0 && val[7] == 0); // not f or h  
   argue['G'-'A'] = (val[2] == 0); // not c  
   argue['H'-'A'] = (val[5] == 1 || val[7] == 1); // same as A's argument  
       int count = 0;  
       for (int j = 0; j < 8;j++){  
       if(argue[j])  
       count += 1;  
       }  
       //cout <<"count=" << count << endl;  
       if(count == n)  
       {  
           solutionCount += 1;  
           correctChar = (char)('A'+i) ;  
       }  
   }  
   if(solutionCount == 1)  
   cout << correctChar << endl;  
   else  
   cout << "DONTKNOW" << endl;  
     
     
     
   return 0;  
} 
