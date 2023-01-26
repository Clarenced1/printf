#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
<<<<<<< HEAD
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */

int _printf(const char *format, ...)

{
	int i, printed = 0, printed_chars = 0;

	int flags, width, precision, size, buff_ind = 0;

=======
 *  * _printf - Printf function
 *   * @format: format.
 *    * Return: Printed chars.
 *     */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
>>>>>>> 956fa9a344eae9408f10d80ecd9ae6363436e774
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
<<<<<<< HEAD
			print_buffer(buffer, &buff_ind);

=======
				print_buffer(buffer, &buff_ind);
>>>>>>> 956fa9a344eae9408f10d80ecd9ae6363436e774
			/* write(1, &format[i], 1);*/
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, list, buffer,
					flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}
<<<<<<< HEAD
	print_buffer(buffer, &buff_ind);
	va_end(list);
=======

	print_buffer(buffer, &buff_ind);

	va_end(list);

>>>>>>> 956fa9a344eae9408f10d80ecd9ae6363436e774
	return (printed_chars);
}

/**
<<<<<<< HEAD
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */

void print_buffer(char buffer[], int *buff_ind)

{
	if (*buff_ind > 0)

=======
 *  * print_buffer - Prints the contents of the buffer if it exist
 *   * @buffer: Array of chars
 *    * @buff_ind: Index at which to add next char, represents the length.
 *     */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
>>>>>>> 956fa9a344eae9408f10d80ecd9ae6363436e774
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
