#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - function that prints text from a file
 * @letters: the characters number to read
 * @filename: the name of the file
 * Return: actual number of letters it should read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fil;
	int len, writechr;
	char *bf;
	size_t lett = letters;

	if (filename == NULL || lett == 0)
	{
		return (0);
	}
	bf = malloc(sizeof(char) * (lett));
	if (bf == NULL)
	{
		return (0);
	}

	fil = open(filename, O_RDONLY);
	if (fil == -1)
	{
		free(bf);
		return (0);
	}
	len = read(fil, bf, lett);
	if (len == -1)
	{
		free(bf);
		close(fil);
		return (0);
	}

	writechr = write(STDOUT_FILENO, bf, len);

	free(bf);
	close(fil);
	if (writechr != len)
	{
		return (0);
	}
	return (len);
}
