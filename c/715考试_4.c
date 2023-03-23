#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,flag=1;
    char ch[100];
    char let;
    for( i = 0 ;;i++)
    {
        let=getchar();
        if((let < 'A'||let>'Z')&&(let < 'a'||let>'z')&&(let!= ' '))
        break; 
        if(let == ' ')
        {
            ch[i]='\n';
            flag++;
        }
        else
        ch[i]=let;
    }
    ch[i]='\0';
    printf("%d\n",flag);
    puts(ch);
}