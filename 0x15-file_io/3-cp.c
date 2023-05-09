#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 1024
/**
 * error_exit - prints an error message and exits with a given status code
 * @exit_code: the status code to exit with
 * @format: a string to format the error message with
 */
void error_exit(int exit_code, char *format, ...)
{
va_list args;
va_start(args, format);
dprintf(STDERR_FILENO, "Error: ");
vdprintf(STDERR_FILENO, format, args);
va_end(args);
exit(exit_code);
}
/**
 * main - copy the contents of one file to another
 * @argc: the number of arguments
 * @argv: the argument vector
 * Return: 0 on success, 97-100 on failure
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, n_read, n_write;
char buf[BUF_SIZE];
if (argc != 3)
{
error_exit(97, "Usage: cp file_from file_to\n");
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
error_exit(98, "Can't read from file %s\n", argv[1]);
}
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
error_exit(99, "Can't write to %s\n", argv[2]);
}
while ((n_read = read(fd_from, buf, BUF_SIZE)) > 0)
{
n_write = write(fd_to, buf, n_read);
if (n_write == -1)
{
error_exit(99, "Can't write to %s\n", argv[2]);
}
}
if (n_read == -1)
{
error_exit(98, "Can't read from file %s\n", argv[1]);
}
if (close(fd_from) == -1)
{
error_exit(100, "Can't close fd %d\n", fd_from);
}
if (close(fd_to) == -1)
{
error_exit(100, "Can't close fd %d\n", fd_to);
}
return (0);
}
