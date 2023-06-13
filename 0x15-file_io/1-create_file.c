#include "main.h"
#include <string.h>

/**
 * create_file - A function that creates a file
 * @filename: File name
 * @text_content: Content
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int file_des;
	int nwrite;
	int len;

	len = strlen(text_content);

	if (!filename)
		return (-1);

	file_des = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_des == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;

	nwrite = write(file_des, text_content, len);

	if (nwrite == -1)
	{
		close(file_des);
		return (-1);
	}

	close(file_des);
	return (1);
}
