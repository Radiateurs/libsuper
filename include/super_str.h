/*
 * SUPER_STR.H by Radiateurs
 * Contains the main includes
 */

#ifndef     SUPER_STR_H
# define    SUPER_STR_H

/*
 * SUPER_STRLEN
 * Gives the length of the string
 * Return 0 if the given string is NULL
 */
int         super_strlen(const char *);

/*
 * SUPER_STRDUP
 * Duplicates the given string
 * Return NULL if allocation failed or if the given string is NULL
 */
char        *super_strdup(const char*);

/*
 * SUPER_STRNDUP
 * Duplicates the given string up to n bytes
 * Return NULL if allocation failed or if the given string is NULL
 */
char        *super_strndup(const char*, int);

/*
 * SUPER_STRDUPA
 * Duplicates the given string using alloca
 * Return NULL if allocation failed or if the given string is NULL
 */
char        *super_strdupa(const char*);

/*
 * SUPER_STRNDUPA
 * Duplicates the given string up to n bytes using alloca
 * Return NULL if allocation failed or if the given string is NULL
 */
char        *super_strndupa(const char*, int);

#endif      /* SUPER_STR_H */
