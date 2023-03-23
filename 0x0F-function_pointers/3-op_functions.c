#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two integers
 * @a: first int
 * @b: second int
 *
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - substraction of two integers
 * @a: first int
 * @b: second int
 *
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: first int
 * @b: second int
 *
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers
 * @a: first int
 * @b: second int
 *
 * Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - euclidean division of two integers
 * @a: first int
 * @b: second int
 *
 * Return: int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
