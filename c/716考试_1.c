#include<stdio.h>
#include<string.h>
/* int findString(char stringArray[][100], char * targetString, int n) {

   //函数定义

} */

int main(){

   char stringArray[10][100];//接收字符串的数组

   char targetString[100];//接收待查找的字符串

   int m,count = 0;

   scanf("%d\n",&m);

   for(int i = 0;i < m;i++)
   {
    gets(stringArray[i]);
   }
    
    gets(targetString);

    for(int i = 0;i < m;i++)
    {
        if(strcmp(stringArray[i],targetString))
        {}
        else
        count++;
    }
   
   printf("%d\n",count);

   return 0;

}

