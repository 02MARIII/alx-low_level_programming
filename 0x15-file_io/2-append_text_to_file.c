#include "main.h"

/**
 * append_text_to_file - Entry point
 * @filename: const pointer param for char
 * @text_content: pointer param for char
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openFile, writeFile;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}
	openFile = open(filename, O_WRONLY | O_APPEND);
	writeFile = write(openFile, text_content, len);
	if (openFile == -1 || writeFile == -1)
		return (-1);
	close(openFile);
	return (1);
}
