#include <stdio.h>
#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, carry = 0, sum;
    char *p1 = n1, *p2 = n2, *pr = r;

    /* Calculate lengths of n1 and n2 */
    while (*p1)
    {
        len1++;
        p1++;
    }
    while (*p2)
    {
        len2++;
        p2++;
    }

    /* Check if the result can fit in the buffer */
    if (len1 > size_r - 1 || len2 > size_r - 1)
    {
        return (0);
    }

    /* Add digits from right to left */
    p1 = n1 + len1 - 1;
    p2 = n2 + len2 - 1;
    pr = r + size_r - 1;
    *pr = '\0'; /* Null-terminate the result string */

    while (p1 >= n1 || p2 >= n2)
    {
        sum = carry;
        if (p1 >= n1)
        {
            sum += *p1 - '0';
            p1--;
        }
        if (p2 >= n2)
        {
            sum += *p2 - '0';
            p2--;
        }

        carry = sum / 10;
        *pr = (sum % 10) + '0';
        pr--;
    }

    /* Check if the result can fit in the buffer */
    if (carry && pr >= r)
    {
        *pr = carry + '0';
    }
    else if (carry)
    {
        return (0);
    }

    return (pr + 1);
}