#ifndef VARIADIC_FUNTIONS_H
#define VARIADIC_FUNTIONS_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
#endif
