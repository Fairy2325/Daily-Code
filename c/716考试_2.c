#include<stdio.h>
char ori[100]={'\0'},del[100]={'\0'},out[100]={'\0'};

int jud(char ch)
{
    for(int i=0;del[i]!='\0';i++)
    {
        if (ch==del[i])
        {
            return 0;
        }
    }
    return 1;
}

void sort(char out[100])
{
    puts(out);
    for(int m=0;out[m]!='\0';m++)
    {
        char ex;
        for(int n=m;out[n]!='\0';n++)
        {
            if(out[m]>out[n])
            {
                ex=out[m];
                out[m]=out[n];
                out[n]=ex;
            }
        }
    }
}

int main(void)
{
    gets(ori);

    gets(del);

    for(int i=0;ori[i]!='\0';i++)
    {
        int x=0;
        if(jud(ori[i]))
        out[x++]=ori[i];
    }
    //sort(out);
    puts(ori);
    puts(del);
    puts(out);
}