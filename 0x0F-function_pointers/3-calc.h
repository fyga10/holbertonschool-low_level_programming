#ifndef _CALC_
#define _CALC_
/* STD  libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/* Structures */
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/* Prototypes */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

static const op_t ops [] = {
    {"+",op_add},
    {"-",op_sub},
    {"*",op_mul},
    {"/",op_div},
    {"%",op_mod},
    {NULL, NULL},
};
#endif