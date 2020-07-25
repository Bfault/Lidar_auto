/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** wheels_dir.c
*/

#include "n4s.h"

answer1_t wheels_dir(float way)
{
    answer1_t answer;
    char f[50];

    write(1, "WHEELS_DIR:", 11);
    sprintf(f, "%f", way);
    write(1, f, strlen(f));
    write(1, "\n", 1);
    take_answer1(&answer);
    return (answer);
}