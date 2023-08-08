#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: File to create.
 * @text_content: finished string to write in the file.
 *
 * Return: 1 if succeed or -1 if failed .
 */

int create_file(const char *filename, char *text_content)
{
mode_t mode;
int flags;
int fd;

if (filename == NULL)
return (-1);

mode = S_IRUSR | S_IWUSR;
flags = O_CREAT | O_WRONLY | O_TRUNC;

fd = open(filename, flags, mode);

if (fd == -1)
return (-1);

if (text_content != NULL)
{
size_t text_len = strlen(text_content);
ssize_t bytes_written = write(fd, text_content, text_len);

if (bytes_written == -1 || (size_t) bytes_written != text_len)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
