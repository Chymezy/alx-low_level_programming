#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * verify97 - checks for the correct number of arguments
 * @argc: number of arguments
 *
 * Return: void
 */
void verify97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * verify98 - checks that file_from exists and can be read
 * @confirm: checks if true of false
 * @file: file_from name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void verify98(ssize_t confirm, char *file, int fd_from, int fd_to)
{
	if (confirm == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * verify99 - checks that file_to was created and/or can be written to
 * @confirm: checks if true of false
 * @file: file_to name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void verify99(ssize_t confirm, char *file, int fd_from, int fd_to)
{
	if (confirm == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * verify100 - checks that file descriptors were closed properly
 * @confirm: checks if true or false
 * @fd: file descriptor
 *
 * Return: void
 */
void verify100(int confirm, int fd)
{
	if (confirm == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - opies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t len_read, len_write;
	char buffer[1024];
	mode_t file_perm;

	verify97(argc);
	fd_from = open(argv[1], O_RDONLY);
	verify98((ssize_t)fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	verify99((ssize_t)fd_to, argv[2], fd_from, -1);
	len_read = 1024;
	while (len_read == 1024)
	{
		len_read = read(fd_from, buffer, 1024);
		verify98(len_read, argv[1], fd_from, fd_to);
		len_write = write(fd_to, buffer, lenr);
		if (len_write != len_read)
			len_write = -1;
		verify99(len_write, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	verify100(close_to, fd_to);
	verify100(close_from, fd_from);
	return (0);
}
