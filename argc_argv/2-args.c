#include <stdio.h>
/**
 *  * main - display all arguments
 *   * @argc:int of the number of arguments in argv
 *    * @argv:vector which is an array of strings
 *     * Return:int argc
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
