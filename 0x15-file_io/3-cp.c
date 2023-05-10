/*
 * FileName: 3-cp.c
 * Author: This file created by TahaElkholy
 * Desc: Project 0x15.c
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entery point to the program
 * @argc: number of args
 * @argv: arguments
 *
 * desc: this progrum copy content of a file into other file
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int n1 = 1024, n2 = 0;
	int file1, file2;
	char ch[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file1 file2\n"), exit(97);

	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);

	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file1);
		exit(99);
	}
	while (n1 == 1024)
	{
		n1 = read(file1, ch, 1024);
		if (n1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		n2 = write(file2, ch, n1);
		if (n2 < n1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(file1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1), exit(100);
	if (close(file2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2), exit(100);
	return (0);
}
