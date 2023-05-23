#include "main.h"

int main(void)
{
    print_putchar();
    _putchar('\n');
    return (0);
}

void print_putchar(void)
{
    char str[] = "_putchar";
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }
}

int _putchar(char c)
{
    /* Your _putchar implementation goes here */
    return (write(1, &c, 1));
}
