/*
 * FileName: 2-append_text_to_file.c
 * Author: This file created by TahaElkholy
 * Desc: Project 0x15.c
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - function that append text to a file
 * @filename: pointer for the file
 * @text_content: content
 *
 * Return: 1 OR -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	while (text_content[i] != '\0')
		i++;

	write(file, text_content, i);

	return (1);
}
