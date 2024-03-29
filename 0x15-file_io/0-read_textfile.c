#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t as;
	ssize_t t;
	ssize_t b;

	as = open(filename, O_RDONLY);
	if (as == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(as, buf, letters);
	b = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(as);
	return (b);
}

