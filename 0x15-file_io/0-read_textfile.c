#include "main.h"

/**
 * read_textfile - A function that reads a text file and print it to the
 * POSIX standard output.
 * @filename: File name
 * @letters: Number of letters printed
 * Return: letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	ssize_t n_read;
	ssize_t n_write;
	char *buffer;

	if (!filename)
		return (0);

	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));

	if (!buffer)
		return (0);

	n_read = read(file_des, buffer, letters);

	n_write = write(STDOUT_FILENO, buffer, n_read);

	close(file_des);

	free(buffer);

	return (n_write);
}
