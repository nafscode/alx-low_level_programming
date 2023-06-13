#include "main.h"

/**
* append_text_to_file - A function that appends text at the end of a file
* @filename: Filename
* @text_content: Content.
* Return: 1 if the file exists. -1 if the fails does not exist
* or if it fails.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file_des;
	int len;
	int nwrite;

	if (!filename)
		return (-1);

	file_des = open(filename, O_WRONLY | O_APPEND);
	if (file_des == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;

		nwrite = write(file_des, text_content, len);

		if (nwrite == -1)
			return (-1);
	}

	close(file_des);

	return (1);
}
