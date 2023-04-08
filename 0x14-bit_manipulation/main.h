#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *b);
int check_binary_number(const char *b);
int power(int a, int b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);

#endif