#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void array(char* str)
{
    int word[30] = {0};
    int len = strlen(str);
    int count = 0;
    for(int i = 0; i < len; i++)
    {
        char a = str[i];
        if(a >= 'a' && a <= 'z')
        {
            word[a - 'a']++;
            count++;
        }
    }
    printf("Leksikalogik harflar: \n");
    for(int i = 0; i < 30; i++)
    {
        if(word[i] > 0)
        {
            printf("%c: %d\n", 'a' + i, word[i]);
        }
    }
    printf("Jami %d ta harflar bor", count);
}

int main()
{
    char word[] = "hello";
    array(word);
    return 0;
}