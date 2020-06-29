/*
** EPITECH PROJECT, 2019
** lib
** File description:
** arrlen.c
*/

#include "my.h"

int arrlen(char **arr)
{
    int len = 0;

    for (len = 0; arr[len]; len++);
    return (len);
}