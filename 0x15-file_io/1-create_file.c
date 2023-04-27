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
	int hd, len, hdwrt;

	hd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (hd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}
	len = 0;
	while (text_content[len] != '\0')
	{
		len++;
	}
	hdwrt = write(hd, text_content, len);
	if (hdwrt == -1)
	{
		return (-1);
	}
	close(hd);
	return (1);
}
