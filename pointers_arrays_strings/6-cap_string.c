/**
 * cwa;// current character in the array of s.
 * prechar;//character before the CWA
 */

#include "main.h"

/**
 * cap_string - capitalize all words of a string that arent already
 * @s: string array
 *
 * Return: string array
 */

char *cap_string(char *s)
{
	int cwa;
	int prechar;

	for (cwa = 0; s[cwa] != '\0'; cwa++)
	{
		prechar = cwa - 1;
		if (s[cwa] >= 'a' && s[cwa] <= 'z')
		{
			if (cwa == 0)
				s[cwa] = s[cwa] - 32;
			else if (s[prechar] >= 9 && s[prechar] <= 10)
				s[cwa] = s[cwa] - 32;
			else if (s[prechar] >= 32 && s[prechar] <= 34)
				s[cwa] = s[cwa] - 32;
			else if (s[prechar] >= 40 && s[prechar] <= 41)
				s[cwa] = s[cwa] - 32;
			else if (s[prechar] == 46)
				s[cwa] = s[cwa] - 32;
			else if (s[prechar] == 59)
				s[cwa] = s[cwa] - 32;
			else if (s[prechar] == 123 || s[prechar] == 125)
				s[cwa] = s[cwa] - 32;
		}
	}

	return (s);
}
