#include "main.h"
/**
 * read_textfile - Entry point
 * @filename: const pointer param for char
 * @letters: param for size_t
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fileo;
	ssize_t filew;
	ssize_t filet;

	fileo = open(filename, O_RDONLY);
	if (fileo == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	filet = read(fileo, buff, letters);
	filew = write(STDOUT_FILENO, buff, filet);

	free(buff);
	close(fileo);
	return (filew);
}
