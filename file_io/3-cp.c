#include <stdio.h>
#include "main.h"

/**
  * main - Entry point
  * @argc: The argument count
  * @argv: The argument vector
  *
  * Return: ...
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
  * copy_file - ...
  * @src: ...
  * @dest: ...
  *
  * Return: ...
  */
void copy_file(const char *src, const char *dest)
{
	int origfd, trunkfd, numread;
	char buff[1024];

	origfd = open(src, O_RDONLY);
	if (!src || origfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	trunkfd = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((numread = read(origfd, buff, 1024)) > 0)
	{
		if (write(trunkfd, buff, numread) != numread || tfd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (numread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(origfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", origfd);
		exit(100);
	}

	if (close(trunkfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", trunkfd);
		exit(100);
	}
}
