/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** clear_trash.c
*/

#include "n4s.h"

void clear_trash(char **trash)
{
    for (int i = 0; trash[i]; i++)
        free(trash[i]);
    free(trash);
}