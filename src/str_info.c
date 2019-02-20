/*
 * STR_INFO.C by Radiateurs
 * Information on str file. 
 * Contains the following functions :
 *  - super_strlen
 *  - super_strndup
 *  - super_strdupa
 *  - super_strndupa
 */

int         super_strlen(const char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
