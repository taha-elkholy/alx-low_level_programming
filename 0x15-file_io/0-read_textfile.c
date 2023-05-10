/*
 * FileName: 0-read_textfile.c
 * Author: This file created by TahaElkholy
 * Desc: Project 0x15.c
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read a text file and prints it to the POSIX
 * @filename: pointer for the file
 * @letters: size of letters
 *
 * Return: number of letters it could read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	ssize_t w, r, file;

	str = malloc(letters);
	if ((str == NULL) || (filename == NULL))
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(str);
		return (0);
	}
	r = read(file, str, letters);
	w = write(STDOUT_FILENO, str, r);
	close(file);
	return (w);
}
