#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100
void removeAll(char *, const char);

int main()
{
    char string[MAX_SIZE];
    char toRemove;
    printf("\nEnter any string: ");
    gets(string);
    printf("\nEnter character to remove from string: ");
    toRemove = getchar();
    removeAll(string, toRemove);
    printf("\nString after removing '%c': %s\n", toRemove, string);
    return 0;
}
void removeAll(char * string, const char toRemove)
{
    int i, j;
    int len = strlen(string);
    for(i=0; i<len; i++)
    {
        if(string[i] == toRemove)
        {
            for(j=i; j<len-1; j++)
            {
                string[j] = string[j+1];
            }
            len--;
            string[len] = '\0';
            i--;
        }
    }
}








