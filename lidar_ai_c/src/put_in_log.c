/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** put_in_log.c
*/

#include "n4s.h"

void put_in_log(char *str)
{
    FILE *stream = fopen("log.txt", "a");

    fwrite(str, 1, my_strlen(str), stream);
    fclose(stream);
}