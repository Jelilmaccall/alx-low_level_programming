#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: Jelil
 * Desc: Header file containing prototype for all functions
 *       used in 0x08-recursion
 */

#include <stddef.h>

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);

#endif