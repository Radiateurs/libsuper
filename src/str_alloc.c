/*
 * STR_ALLOC.C by Radiateurs
 * Memory manipulation file. 
 * Contains the following functions :
 *  - super_strdup
 *  - super_strndup
 *  - super_strdupa
 *  - super_strndupa
 */

#include    <stdlib.h>
#include    "super.h"

char        *super_strdup(const char *str)
{
    char    *ret;
    int     i;

    i = 0;
    if (str == NULL)
        return (NULL);
    if ((ret = malloc(sizeof(*ret) * (super_strlen(str) + 1))) == NULL)
        return (NULL);
    while (str[i] != '\0')
    {
        ret[i] = str[i];
        i++;
    }
    ret[i] = '\0';
    return (ret);
}

char        *super_strndup(const char *str, int n)
{
    char    *ret;
    int     i;

    i = 0;
    if (str == NULL)
        return (NULL);
    if ((ret = malloc(sizeof(*ret) * (super_strlen(str) + 1))) == NULL)
        return (NULL);
    while (str[i] != '\0' && i < n)
    {
        ret[i] = str[i];
        i++;
    }
    ret[i] = '\0';
    return (ret);
}

char        *super_strdupa(const char *str)
{
    char    *ret;
    int     i;

    i = 0;
    if (str == NULL)
        return (NULL);
    if ((ret = alloca(sizeof(*ret) * (super_strlen(str) + 1))) == NULL)
        return (NULL);
    while (str[i] != '\0')
    {
        ret[i] = str[i];
        i++;
    }
    ret[i] = '\0';
    return (ret);
}

char        *super_strndupa(const char *str, int n)
{
    char    *ret;
    int     i;

    i = 0;
    if (str == NULL)
        return (NULL);
    if ((ret = alloca(sizeof(*ret) * (super_strlen(str) + 1))) == NULL)
        return (NULL);
    while (str[i] != '\0' && i < n)
    {
        ret[i] = str[i];
        i++;
    }
    ret[i] = '\0';
    return (ret);
}

