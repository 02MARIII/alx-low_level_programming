#include "main.h"
/**
 * exitWithError - Entry point
 * @exitCode: param for int
 * @errorMessage: pointer const param for char
 * @arg: pointer const param for char
 * Return: void
*/
void exitWithError(int exitCode, const char *errorMessage, const char *arg)
{
	dprintf(STDERR_FILENO, errorMessage, arg);
	exit(exitCode);
}
/**
 * openOutputFile - Entry point
 * @file_to:const pointer param of char
 * Return: int
*/
int openOutputFile(const char *file_to)
{
	int fT;

	fT = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);
	return (fT);
}
/**
 * openAndCopyFile - Entry point
 * @file_from: const pointer param of char
 * @file_to: const pointer param of char
 * Return: int
*/
int openAndCopyFile(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytesRead;
	char fd_str[10];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		exitWithError(98, "Error: Can't read from file %s\n", file_from);
	}
	fd_to = openOutputFile(file_to);
	if (fd_to == -1)
	{
		exitWithError(99, "Error: Can't write to file %s\n", file_to);
	}

	while ((bytesRead = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		if (write(fd_to, buffer, bytesRead) == -1)
			exitWithError(99, "Error: Can't write to file %s\n", file_to);
	}

	if (bytesRead == -1)
	{
		sprintf(fd_str, "%d", fd_from);
		exitWithError(98, "Error: Can't read from file %s\n", file_from);
	}

	if (close(fd_from) == -1)
	{
		sprintf(fd_str, "%d", fd_from);
		exitWithError(100, "Error: Can't close fd %s\n", fd_str);
	}

	if (close(fd_to) == -1)
	{
		sprintf(fd_str, "%d", fd_to);
		exitWithError(100, "Error: Can't close fd %s\n", fd_str);
	}
	return (0);
}
/**
 * main - Entry point
 * @argc: param of int
 * @argv: aray for list
 * Return: int
*/
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	if (argc != 3)
		exitWithError(97, "Usage: %s file_from file_to\n", argv[0]);
	return (openAndCopyFile(file_from, file_to));
}
