#include <stdio.h>
#define MAX_SIZE 100
void replaceLast(char * string, char toReplace, char replaceWith);

int main()
{
    char string[MAX_SIZE], toReplace, replaceWith;
    printf("\nEnter any string: ");
    gets(string);
    printf("\nEnter character to replace: ");
    scanf(" %c", &toReplace);
    printf("\nEnter character to replace '%c' with: ", toReplace);
    scanf(" %c", &replaceWith);
    printf("\nString before replacing: %s\n", string);
    replaceLast(string, toReplace, replaceWith);
    printf("\nString after replacing: %s\n", string);
    return 0;
}
void replaceLast(char * string, char toReplace, char replaceWith)
{
    int i, index;

    index = -1;
    i = 0;

    /* Runs till the end of string */
    while(string[i] != '\0')
    {
        if(string[i] == toReplace)
        {
            index = i;
        }
        i++;
    }
    if(index != -1)
    {
        string[index] = replaceWith;
    }
}





