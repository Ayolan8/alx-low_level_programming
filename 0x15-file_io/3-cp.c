#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
/**
 * closeErrorCheck - function that closes a file descriptor
 * @fileDesc: file descr. that will be closed
 * Return: 0 on success, -1 if otherwise
 */
int closeErrorCheck(int fileDesc)
{
	int error = close(fileDesc);

	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd1 %d\n", fileDesc);
		return (100);
	}
	return (0);
}
/**
 * readError - function that will hand the read error
 * @fileDesc1: 1st desc to close
 * @fileDesc2: 2nd desc to close
 * @filename: filename that is giving the error
 * Return: 98
 */
int readError(int fileDesc1, int fileDesc2, char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from %s\n", filename);
	closeErrorCheck(fileDesc1);
	closeErrorCheck(fileDesc2);
	return (98);
}
/**
 * writeError - function that will handle the write error
 * @fileDesc1: 1st desc to close
 * @fileDesc2: 2nd desc to close
 * @filename: filename thats giving the error
 * Return: 99
 */
int writeError(int fileDesc1, int fileDesc2, char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	closeErrorCheck(fileDesc1);
	closeErrorCheck(fileDesc2);
	return (99);
}

/**
 * main - function that copies one file to another
 * usage - copy file__from file__to
 * @acc: number of argument
 * @arv: list of arguments
 * Return: 97 if incoorrect number of arguments
 * 98 if file__from does not exist
 * 99 if the write fails
 * 100 if thr file_close fails
 * otherwise 0
 */
int main(int acc, char *arv[])
{
	char bf[1024];
	int lenR, lenW;
	int fileFrom, fileTo, error;

	if (acc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to \n");
		return (97);
	}
	fileFrom = open(arv[1], O_WRONLY);
	if (fileFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arv[1]);
		return (98);
	}
	fileTo = open(arv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fileTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arv[2]);
return (99);
	}
	do {
		lenR = read(fileFrom, bf, 1024);
		if (lenR == -1)
		{
			return (readError(fileFrom, fileTo, arv[1]));
		}
		lenW = write(fileTo, bf, lenR);
		if (lenW == -1 || lenW != lenR)
		{
			return (writeError(fileFrom, fileTo, arv[1]));
		}
	} while (lenR == 1024);
	error = closeErrorCheck(fileFrom);
	error += closeErrorCheck(fileTo);
	if (error != 0)
		return (100);
	return (0);
}




