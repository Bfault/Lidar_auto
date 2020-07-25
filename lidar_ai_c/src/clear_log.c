/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** clear_log.c
*/

#include "n4s.h"

void clear_log(void)
{
    FILE *stream = fopen("log.txt", "w");

    fclose(stream);
}