#include <stdbool.h> 

bool mx_isdigit(int);
int mx_atoi(const char *str)
{
    int result = 0;
    int reverse = 0;
    for (int i = 0; str[i] != '\0'; ++i)
    {
        int symbol = str[i] - '0';
        if (!mx_isdigit(symbol))
        {
            if (i > 0 || str[i] != '-')
            {
                return 0;
            }
            else if (i == 0 && str[i] == '-')
            {
                reverse = 1;
            }
        }
        else
        {
            result *= 10;
            result += symbol;
        }
    }
    return reverse == 0 ? result : result * -1;
}
