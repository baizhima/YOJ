#include <iostream>  
#include <cmath>  
#include <fstream>  
  
using namespace std;  
  
  
  
int main()  
{  
    int n;  
    //ifstream cin("/Users/oh_baizhima/Documents/input.txt");  
    cin >> n;  
    //n=5;  
        char c[2*n-1][2*n-1];  
    for (int row = 0; row < 2*n-1; row++)  
        for (int col = 0; col < 2*n-1; col++)  
        {  
              
                int rowdiff = abs((2*n-1)/2 - row);  
                if (col == rowdiff || col + rowdiff == 2*n-2)  
                    c[row][col] = '*';  
                else  
                    c[row][col] = ' ';  
                      
                       
        }  
    for (int i = 0; i < 2*n-1; i++)  
        for (int j = 0; j < 2*n-1;j++)  
        {  
            cout << c[i][j];  
            if (j == 2*n-2)  
                cout << endl;  
        }  
    return 0;  
}  
