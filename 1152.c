#include<stdio.h>  
#include<string.h>  
#include<stdlib.h>  
  
  
int isUpper(char c)  
{  
    if (c >= 'A' && c <= 'Z')  
        return 1;  
    return 0;  
}  
  
char toUpper(char c)  
{  
    if (c >= 'A' && c <= 'Z')  
        return c;  
    return c + 'A' - 'a';  
}  
  
char decrypt(char secretChar, char keyChar)  
{  
      
    int secretUpper = 0;  
    if (isUpper(secretChar)) {  
        secretChar += 'a' - 'A';  
        secretUpper = 1;  
    }  
      
    if (isUpper(keyChar)) keyChar += 'a' - 'A';  
    //printf("secretChar= %c,keyChar=%c\n",secretChar,keyChar);  
    //if (toUpper(secretChar) < )  
    char c;  
    if (secretChar - keyChar < 0)  
        c = secretChar  + 26- (keyChar - 'a');  
    else  
        c = secretChar  - (keyChar - 'a');  
    //printf("before+26 = %c\n",c);  
    if (c < 'a') c += 26;  
    //printf("after+26 = %c\n",c);  
    if (secretUpper)  
        return toUpper(c);  
    else  
        return c;  
}  
  
  
int main()  
{  
      
    char key[101],secret[1001],original[1001];  
    int len,n,i;  
    scanf("%s",key);  
    scanf("%s",secret);  
    len = strlen(key);  
    for (i = 0; i < strlen(secret); i++)  
        printf("%c",decrypt(secret[i],key[i%len]));  
      
    printf("\n");  
    //printf("%c\n",decrypt('g','p'));  
    return 0;  
}
