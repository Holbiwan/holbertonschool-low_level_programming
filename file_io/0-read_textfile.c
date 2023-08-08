#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX std output
 * @filename: file to open or read                                       
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed or return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, count = 0;
	char *buffer = malloc(sizeof(char) * letters);

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	count = read(file, buffer, letters);
	buffer[letters] = '\0';
	count = write(STDOUT_FILENO, buffer, count);
	close(file);
	free(buffer);
	return (count);
}
