#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, j = 0;
char *s;
const char *sep = "";
va_start(args, format);
while (format && format[i])
{
j = 0;
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 's':
s = va_arg(args, char *);
if (!s)
s = "(nil)";
printf("%s%s", sep, s);
break;
default:
j = 1;
break;
}
if (!j)
sep = ", ";
i++;
}
va_end(args);
printf("\n");
}
