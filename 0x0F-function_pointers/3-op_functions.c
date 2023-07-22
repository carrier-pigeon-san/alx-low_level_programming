#include "3-calc.h"
/**
 * op_add - returns the sum of two integers
 * @a: first integer operand
 * @b: second integer operand
 * Return: sum
 */
int op_add(int a, int b)
{
	sum = a + b;
	return (sum);
}
/**
 * op_sub - returns the difference of a and b
 * @a: first integer operand
 * @b: second integer operand
 * Return: differene
 */
int op_sub(int a, int b)
{
	diff = a - b;
	return (diff);
}
/**
 * op_mul - returns the product of multiplication od a and b
 * @a: first integer operand
 * @b: second integer operand
 * Return: product
 */
int op_mul(int a, int b)
{
	prod = a * b;
	return (prod);
}
/**
 * op_div - returns the quotient of the division of a by b
 * @a: first integer operand
 * @b: second integer operand
 * Return: quotient
 */
int op_div(int a, int b)
{
	quot = a / b;
	return (quot);
}
/**
 * op_mod - returns the remainder of the division of a by b
 * @a: first integer operand
 * @b: second integer operand
 * Return: modulus
 */
int op_mod(int a, int b)
{
	mod = a % b;
	return (mod);
}
