#include <stdio.h>


int string_length(const char *str)
{
    const char *p;
    p = str;
    while(*p)
        p++;
    return p - str;
}

void string_copy(char *dest, const char *src)
{
    int i;
    for(i = 0; *src; i++)
        dest[i] = src[i];
    dest[i] = 0;
}

void string_copy_1(char *dest, const char *src)
{
    while(*src) {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = 0;
}

void string_copy_2(char *dest, const char *src)
{
    for( ; *src; dest++, src++)
        *dest = *src;
    *dest = 0;
}

void string_print(const char *str)
{
    for (; *str; str++){
        printf("%c", *str);
    }
    printf("\n");
}

