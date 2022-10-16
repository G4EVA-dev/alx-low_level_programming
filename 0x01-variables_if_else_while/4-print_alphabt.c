#include<stdio.h>
/**
*main - Start
*Return: Always 0
*/
int main(void)
{
int ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if ((ch != 'q' && ch != 'e') && ch <= 'z')
putchar(ch);
}
putchar('\n');
return (0);
}
