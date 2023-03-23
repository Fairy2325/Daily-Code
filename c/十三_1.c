#include<stdio.h>
#include<string.h>
int main(void)
{
    char word[300]={'\0'};
    char smallest_word[300];
    char largest_word[300];
    printf("Enter word:");
    scanf("%s",largest_word);
    while(1)
    {
        char word[300]={'\0'};
        printf("Enter word:");
        scanf("%s",word);
        if(word[3]!='\0'&&word[4]=='\0')
        break;
        if(strcmp(smallest_word,word)>0)
        strcpy(smallest_word,word);
        if(strcmp(largest_word,word)<0)
        strcpy(largest_word,word);
    }
    printf("Smallest word: %s\n",smallest_word);
    printf("largest word: %s\n",largest_word);
}