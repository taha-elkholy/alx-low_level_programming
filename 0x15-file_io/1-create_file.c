/*
 * FileName: 1-create_file.c
 * Author: This file created by TahaElkholy
 * Desc: Project 0x15.c
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: pointer for the file
 * @text_content: content
 *
 * Return: 1 OR -1.
 */
int create_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	while (text_content[i] != '\0')
		i++;

	write(file, text_content, i);

	return (1);
}
