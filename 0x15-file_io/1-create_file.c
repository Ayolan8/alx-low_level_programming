#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * create_file - functio that creates a file and puts text in it
 * @filename: name given to the file
 * @text_content: text that will be put into the file
 * Return: 1 on success, -1 if otherwisw
 */
int create_file(const char *filename, char *text_content)
{
	int fil;
	int len = 0;
	int inln = 0;
	char *pntr;

	if (filename == NULL)
	{
		return (-1);
	}

	fil = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fil == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (; ((pntr) = text_content); pntr++)
			inln++;
		len = write(fil, text_content, inln);
	}

	if (close(fil) == -1 || inln != len)
	{
		return (-1);
	}
	return (1);
}
