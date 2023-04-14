#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * append_text_to_file - function that creates a file
 * @filename: name given to the file
 * @text_content: text to write into the file
 * Return: 1 on success, -1 if otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filee;
	ssize_t len = 0;
	ssize_t inLen = 0;
	char *pntr;

	if (filename == NULL)
	{
		return (-1);
	}
	filee = open(filename, O_WRONLY | O_APPEND);
	if (filee == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (inLen = 0, pntr = text_content; *pntr; pntr++)
		{
			inLen++;
		}
		len = write(filee, text_content, inLen);
	}
	if (close(filee) == -1 || inLen != len)
	{
		return (-1);
	}
	return (1);
}
