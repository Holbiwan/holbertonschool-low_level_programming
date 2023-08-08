#include "main.h"
/**
 * _strlen - Switch the value of 2 variables
 * @s: Char that receives
 *
 * Return: On success 1 or -1 on error
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count))
		count++;
	return (count);
}
/**
 * create_file - function that creates a file
 *
 * @filename: file to create
 * @text_content: size to print
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (text_content == NULL)
		return (1);
	if (file == -1)
		return (-1);
	write(file, text_content, _strlen(text_content));
	close(file);
	return (1);
}
