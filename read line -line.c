/* Program to read a text file line by line Author: CppBuzz Date: 17th Nov 2017 */

#include <stdio.h>

int main(int argc, char* argv[])
{
//read any text file from currect directory
char const* const fileName = "hello.txt";

FILE* file = fopen(fileName, "r"); 

if(!file){
printf("\n Unable to open : %s ", fileName);
return -1;
}

char line[500];

while (fgets(line, sizeof(line), file)) {
printf("%s", line); 
}
fclose(file);
return 0;
}
