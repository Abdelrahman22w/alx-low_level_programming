#include "main.h"
/**
 * create_file - a function to create a file
 * @filename: the name of the file
 * @text_content: the char of the file
 * Return: 1 if succeeded, -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		retrun(-1);
	fd = open(filename, O_CREATE | O_WRONLY | O_TRUNC, 0600)

	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (nletters = 0; text_content[nletters]; nletters++)
		;
	rwr = write(fd, text_content, nletters);
	if (rwr == -1)
		return (-1);
	close(fd);
	return (1);
}
