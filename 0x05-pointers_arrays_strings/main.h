#ifndef _MAIN_H_
#define _MAIN_H_

#include "_putchar.c"
#include "2-strlen.c"
/**
 * void reset_to_98 - resets to 98
 */
void reset_to_98(int *n);
/**
 * void swap_int - swaps two integers
 */
void swap_int(int *a, int *b);
/**
 * int _strlen - returns strlen
 */
int _strlen(char *s);
/**
 * _putchar - prints character
 *
 * @c: chahracter
 *
 * Return: 1 or 0;
 */
int _putchar(char c);
/**
 * _puts - prints characters
 */
void _puts(char *str);
/**
 * void print_rev - prints reverse
 */
void print_rev(char *s);
/**
 * void rev_string - prints reverse
 */
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
#endif
