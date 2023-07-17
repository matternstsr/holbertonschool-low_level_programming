#include <stdio.h>
#include "main.h"

/**
  * append_text_to_file - ...
  * @filename: ...
  * @text_content: ...
  *
  * Return: ...
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_discription;

	if (!filename)
		return (-1);

	file_discription = open(filename, O_WRONLY | O_APPEND);
	if (file_discription == -1)
		return (-1);

	if (text_content)
	{
		if (write(file_discription, text_content, _strlen(text_content)) == -1)
			return (-1);
	}

	close(file_discription);
	return (1);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;

	return (count);
}
