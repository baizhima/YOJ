  
#include <iostream>  
#include <cmath>  
#include <fstream>  
  
using namespace std;  
  
  
  
int main()  
{  
    int n;  
    //ifstream cin("/Users/oh_baizhima/Documents/input.txt");  
    cin >> n;  
    bool lights[n];  
    int lightnum[n];  
    int count = 0;  
    // turn off all lights  
    for (int i = 0; i < n; i++)  
        lights[i] = false;  
    // turn on lights that are numbered 2*  
    for (int i = 0;  i < n; i++)  
    {  
        if((i + 1) % 2 == 0)  
        {  
            lights[i] = !lights[i];  
        }  
    }  
    for (int j = 3; j <=n ; j++)  
    {  
        for (int i = 0; i < n; i++)  
        {  
            if ((i+1)%j == 0)  
                lights[i] = !lights[i];  
            if (j == n && lights[i])  
                lightnum[count++] = i+1;  
                  
        }  
    }  
    for (int i = 0; i < count; i++)  
    {  
        cout << lightnum[i];  
        if(i!=(count-1))  
            cout << " ";  
    }  
    cout << endl;  
    return 0;  
}  
