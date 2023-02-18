#include<stdio.h>

/**
 * main - Entry
 *
 * Return - Always 0
 */

int main(void)
{
unsigned char a = '0';
int base;

for (base = 0; base < 10; base++)
{
putchar(a);
a++;
}
a = '1';
for (base = 0; base < 6; base++)
{
putchar('0' + a);
a++;
}
putchar('\n');
return (0);
}
