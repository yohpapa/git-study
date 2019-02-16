#include <stdio.h>

size_t my_strlen(const char* s)
{
    const char* p = s;

    while (*p)
        ++p;

    return p - s;
}

char* my_strcpy(char* t, char* s)
{
    char* p = t;

    while (*t ++ = *s ++);

    return p;
}

int main(void)
{
    int i;
    char p1[32];
    char *s[] =
    {
        "Git tutorials",
        "Tutorials point",
    };

    for (i = 0; i < 2; ++i)
        printf("string length of %s = %lu\n", s[i] , my_strlen(s[i]));

    printf("%s\n", my_strcpy(p1, "Hello world!"));

    return 0;
}
