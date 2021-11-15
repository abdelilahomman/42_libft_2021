#include"libft.h"
static int check_sign(size_t sign)
{
    if (sign == 1)
        return (-1);
    return (0);
}
int ft_atoi(const char *str)
{
    size_t i;
    size_t k;
    int sign;
    unsigned long long n;

    i = 0;
    n = 0;
    sign = 1;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    if (str[i] == '-')
    {
        sign = - 1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    k = i;
    while (str[i] && (str[i] >= 47 && str[i] <= 57))
        n = n * 10 + str[i++] - 48;
    k = i - k;
    if (k > 19 || n > 9223372036854775807)
        return (check_sign(sign));
    n = n * sign;
    return ((int)n);
}
