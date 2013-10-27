#include <iostream>  
#include <fstream>  
#include <iomanip>  
using namespace std;  
  
int main()  
{  
   //ifstream cin("input.txt");  
   int n; // number of swimmers  
   int a,b,c,d;  
   int noLessThan90 = 0;  
   int lessThan60 = 0;  
   cin >> n;  
   for (int i = 0; i < n;i++)  
   {  
       cin >> a >> b >> c >> d;  
       double score = 0;  
       score = 0.2*b + 0.1*c + 0.7*d;  
       int intscore;  
       if (score - (int)score >= 0.5)  
       intscore = (int)(score + 1);  
       else  
       intscore = (int)score;  
       cout << a << " " << intscore << endl;  
       if (intscore >= 90) noLessThan90 += 1;  
       if (intscore < 60) lessThan60 += 1;  
         
   }  
   cout << noLessThan90 << endl;  
   cout << lessThan60 << endl;  
     
     
     
   return 0;  
}  
