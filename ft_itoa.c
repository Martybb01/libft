#include "libft.h"

/* the get_length function calculates the length of the string representation of an integer, considering both positive and negative numbers. It iteratively divides the integer by 10, counting the digits, and adds 1 for the negative sign when applicable. This length is later used for memory allocation and string conversion in the ft_itoa function. */
static int get_length(int n)
{
    int len;
    int temp;

    len = 1;
    temp = n;                     // copy of n to ensure n is not modified
    while (temp > 9 || temp < -9) // used to count the number of digits in n
    {
        temp /= 10; // removes the rightmost digit from temp
        len++;      // track the number of iterations = the length of the string
    }
    if (n < 0)
        len++; // keep negative sign
    return (len);
}
/* takes care of converting the integer to its string representation, considering the sign of the number and placing the negative sign at the appropriate position. The digits are extracted one by one, starting from the rightmost digit, and stored in the result array in reverse order to correctly represent the integer. */
static void convert_to_string(char *result, int n, int len)
{
    int i;
    int sign;

    sign = 1;
    if (n < 0)
    {
        sign = -1;
        n = -n; // make n positive by taking its absolute value
    }
    i = len - 1;
    while (i >= 0)
    {
        /* Calculates the rightmost digit of the number n by taking the remainder of n when divided by 10. This gives you the last digit of the number. It is then converted to its ASCII character representation by adding '0'. */
        result[i] = (n % 10) + '0';
        /* Divides n by 10 to remove the rightmost digit, moving to the next digit to the left. This process continues for each digit until n becomes 0. */
        n /= 10;
        i--;
    }
    if (sign == -1)
        result[0] = '-';
    result[len] = '\0';
}
// main function to convert an integer to a string
char *ft_itoa(int n)
{
    char *result;
    int len;

    len = get_length(n);
    result = (char *)malloc(sizeof(char) * (len + 1));
    if (!result)
        return (NULL);
    convert_to_string(result, n, len);
    return (result);
}

int main(void)
{
    int n;
    char *str;

    n = (12345);
    str = ft_itoa(n);
    printf("La stringa è: %s\n", str);
    free(str);
    return (0);
}
