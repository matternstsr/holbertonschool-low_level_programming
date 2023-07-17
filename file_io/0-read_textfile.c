#include "main.h"

/**
  * read_textfile - ...
  * @filename: The source file
  * @letters: Number of letters to reads and prints
  *
  * Return: ...
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_description, number_of_bytes;
	char *buffer = malloc(sizeof(char *) * letters);

	if (!buffer)
		return (0);

	if (!filename)
		return (0);

	file_description = open(filename, O_RDONLY, 0600);
	if (file_description == -1)
		return (0);

	number_of_bytes = read(file_description, buffer, letters);
	write(STDOUT_FILENO, buffer, number_of_bytes);

	free(buffer);
	close(file_description);
	return (number_of_bytes);
}
