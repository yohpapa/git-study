#include <stdio.h>

size_t my_strlen(const char* s)
{
    const char* p = s;

    while (*p)
        ++p;

    return p - s;
}

char* my_strncpy(char* t, char* s, int len)
{
    char* p = t;

    while ((*t ++ = *s ++) && len -- > 0) ;

    return p;
}

char* my_strcpy(char* t, char* s)
{
    char* p = t;

    while (*t ++ = *s ++);

    return p;
}

#define TEXT_LEN (32)

int main(void)
{
    int   i;
    char  p1[TEXT_LEN];
    char* s[] =
    {
        "Git tutorials",
        "Tutorials point",
    };

    for (i = 0; i < 2; ++i)
        printf("string length of %s = %lu\n", s[i] , my_strlen(s[i]));

    printf("%s\n", my_strcpy(p1, "Hello world!"));
    printf("%s\n", my_strncpy(p1, s[0], my_strlen(s[0]) - 2));

    return 0;
}
