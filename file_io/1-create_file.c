#include "main.h"

/**
  * create_file - ...
  * @filename: ...
  * @text_content: ...
  *
  * Return: ...
  */
int create_file(const char *filename, char *text_content)
{
	int file_desc;

	if (!filename)
		return (-1);

	file_desc = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_desc == -1)
		return (-1);

	if (text_content)
		write(file_desc, text_content, _strlen(text_content));

	close(file_desc);
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
