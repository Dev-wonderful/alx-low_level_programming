#include "main.h"
/**
 * _strcat - To concantenate two strings 
 * @dest: destination string
 * @src: source string
 *  
 * return - a pointer to the final string 
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0;
    int i, j;

    for (i = 0; dest[i] != '\0'; i++)
    {
        dest_len++;
    };

    j = 0;

    while (src[j] != '\0')
    {
        dest[dest_len + j] = src[j];
        j++;
    }

    dest[dest_len + j] = '\0';

    return (dest);
}