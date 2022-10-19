#include "main.h"

/************* PRINT CHAR **************/

/**
 * print_char - prints a char
 * @types: list of arguments
 * @buffer: Buffer array to handle print 
 * @flags: calculates active flags 
 * @width: width
 * @precision: precission specification
 * @size: size specifier
 * return: number of chars printed 
 */
int print_char(va_list types, char buffer[]'
		int flags, int width, int precision, int size)
{

	char c = va_arg(types, int);
	return (handle_write_char(c, buffer, flags, width, precision, size));

}
/*****************PRINT A STRING *****************/
/**
 * prints_string - prints a string 
 * @types: list of an argument
 * @buffer: buffer array to handle print
 * @flags: calculate active flags
 * @width : get width
 * @precision: precision specification
 * @size : size specifier
 * return number of chars printed 
 */
int print_string(va_list types, char buffer[], int flags,
		int width, int precision, int size)
{ 
	int lenght = 0, i;
	char *str = va_arg(types, char *);
	
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	if (str == NULL)
	{ 
		str = "(null)";
		if (precision >= 6)
			str = "    ";

	}
	while (str[lenght] != '\0')
		lenght++;
	if (precision >= 0 && precision < lenght)
		lenght = precision;
	if (width > lenght)
	{
		if (flags & F_MINUS)
		{ 
	       write(1, &str[0], lenght);
	       for (i = width - lenght; i > 0; i--)
		       write(1, "  ", 1);
	       return (width);
	
	
		}	

	}





}

