#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_all - Prints anything
  * @format: The conversion specifier to prints
  *
  * Return: Nothing
  */
void print_all(const char * const format, ...)
{
	va_list arguments;
	f_dt form_types[] = {
		{ "c", print_a_char },
		{ "i", print_a_integer },
		{ "f", print_a_float },
		{ "s", print_a_char_ptr }
	};
	unsigned int forminc = 0;
	unsigned int typeinc = 0;
	char *separator = "";

	va_start(arguments, format);

	while (format != NULL && format[forminc])
	{
		typeinc = 0;
		while (typeinc < 4)
		{
			if (format[forminc] == *form_types[typeinc].identifier)
			{
				form_types[typeinc].f(separator, arguments);
				separator = ", ";
			}
			typeinc++;
		}
		forminc++;
	}

	va_end(arguments);
	printf("\n");
}

/**
  * print_a_char - Prints char type
  * @separator: serparates character
  * @args: arguments list
  *
  * Return: Nothing
  */
void print_a_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
  * print_a_integer - Prints int type
  * @separator: serparates character
  * @args: arguments list
  *
  * Return: Nothing
  */

void print_a_integer(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
  * print_a_float - Prints float type
  * @separator: The separator of the character
  * @args: Arguments list
  *
  * Return: Nothing
  */
void print_a_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
  * print_a_char_ptr - Prints pointer to char type
  * @separator: separator character
  * @args: arguments lists
  *
  * Return: Nothing
  */
void print_a_char_ptr(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, arg);
}

