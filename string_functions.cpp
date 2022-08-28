#include <stdio.h>
#include "string_functions.hpp"

int _puts(const char* _string)
{
    for (int i = 0; _string[i]; ++i)
    {
        if (putchar(_string[i]) == EOF)
        {
            return EOF;
        }
    }

    if (putchar('\n') == EOF)
    {
        return EOF;
    }

    return 1;
}

const char* _strchr(const char* _string, char _char)
{
    for (int i = 0; _string[i]; ++i)
    {
        if (_char == _string[i])
        {
            return &_string[i];
        }
    }
    return NULL;
}

size_t _strlen(const char* _string)
{
    size_t _len = 0;
    for (int i = 0; _string[i]; ++i)
    {
        ++_len;
    }
    return _len;
}

int _strcmp(const char* _firstString, const char* _secondString)
{
    int _firstLen =  _strlen(_firstString);
    int _secondLen = _strlen(_secondString);

    return (_firstLen - _secondLen);
}
