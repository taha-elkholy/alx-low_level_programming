/*
 * File: 100-first.c
 * Author: Created By TahaElkholy
 */

#include <stdio.h>

void __attribute__((constructor)) print_first(void);

/**
 * print_first - print befor main
 *
 * Return: void
 */
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
