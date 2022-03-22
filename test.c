#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char *str;

    str = (char*)malloc(10);
    strcpy(str, "hello code scanning."); // buffer overflow
    printf("%s\n",str);

    return(0);
}
