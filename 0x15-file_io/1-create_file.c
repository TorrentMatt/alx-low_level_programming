#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 * Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int as;
	int w;
       	int leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	as = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(as, text_content, leng);

	if (as == -1 || w == -1)
		return (-1);

	close(as);

	return (1);
}

