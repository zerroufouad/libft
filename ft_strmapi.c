



char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *ptr;
    unsigned int i;
    int len;

    if (!s || !f)
        return (ft_strdup(""));
    len = ft_strlen(s);
    ptr = (char *)malloc(sizeof(char *) * (len + 1));
    if (!ptr)
        return (NULL);
    i = 0;
    while (s[i])
    {
        ptr[i] = f(i, s[i]);
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}