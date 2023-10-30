#include "main.h"

/**
 * create_file - Entry point
 * @filename: const pointer param for char
 * @text_content: pointer param for char
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytes_written;
	int fileDes;

	fileDes = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (filename == NULL || fileDes == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes_written = write(fileDes, text_content, strlen(text_content));
		if (bytes_written == -1) {
			close(fileDes);
			return (-1);
		}
	}
	close(fileDes);
	return (1);
}
