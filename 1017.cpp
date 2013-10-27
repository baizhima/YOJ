/**************************************************** 
作　　者: 卢山(2010201496) 
题　　目: 1017.打印图形 (http://you.ruc.edu.cn/yoj/problem.php?id=1017) 
版　　本: version_0 
提交时间: 2013-10-14 09:19:05.0 
 
运行结果: 正确通过 
****************************************************/  
//  
//  main.cpp  
//  cs01  
//  
//  Created by Shan Lu on 13-10-10.  
//  Copyright (c) 2013年 Shan Lu. All rights reserved.  
//  
  
#include <iostream>  
#include <cmath>  
#include <fstream>  
  
using namespace std;  
  
  
  
int main()  
{  
    int n;  
    //ifstream cin("/Users/oh_baizhima/Documents/input.txt");  
    cin >> n;  
    //n=2;  
        char c[2*n-1][3*n-2];  
    for (int row = 0; row < 2*n-1; row++)  
        for (int col = 0; col < 3*n-2; col++)  
        {  
            if (row == 0 || row == 2*n-2)  
            {  
                if (col >= n - 1 && col <= 2*n-2)  
                    c[row][col] = '*';  
                else  
                    c[row][col] = ' ';  
            }  
            else  
            {  
                int rowdiff = abs((2*n-1)/2 - row);  
                if (col == rowdiff || col + rowdiff == 3*n-3)  
                    c[row][col] = '*';  
                else  
                    c[row][col] = ' ';  
                      
            }           
        }  
    for (int i = 0; i < 2*n-1; i++)  
        for (int j = 0; j < 3*n-2;j++)  
        {  
            cout << c[i][j];  
            if (j == 3*n-3)  
                cout << endl;  
        }  
    return 0;  
}  
