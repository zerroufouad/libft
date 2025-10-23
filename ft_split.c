#include <stdio.h>
#include <stdlib.h>
static size_t count_w(char const *str, char c)
{
    int i;
    size_t  count;
    int in_word;

    i = 0;
    count = 0;
    while (str[i])
    {
        while (str[i] && str[i] == c)
        i++;
        in_word = 0;
        while (str[i] != c && str[i])
        {
            if (in_word == 0)
            {
                count++;
                in_word = 1;
            }
            i++;
        }
    }
    return (count);
}
static char **free_char(char **str, size_t i)
{
    size_t j;
    j = 0;
    while (i > j)
        free(str[j++]);
    free(str);
    return NULL;
}

char **ft_split(char const *s, char c)
{
    char **result;
    size_t count;
    size_t i;
    size_t j;
    size_t start;

    if (!s)
        return (NULL);
    count = count_w(s, c);
    result = (char **)malloc(count + 1);
    if (!result)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i] && j < count)
    {
        while (s[i] && s[i] == c)
            i++;
        start = i;
        while (s[i] && s[i] != c)
            i++;
        result[j++] = ft_substr(s, start, i - start);
        if (!result[j - 1])
            return free_char(result, j - 1);
    }
    result[j] = '\0';
}

