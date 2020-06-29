/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** cycle_wait.c
*/

#include "n4s.h"

answer3_t cycle_wait(int cycle)
{
    answer3_t answer;
    char d[50];

    write(1, "CYCLE_WAIT:", 11);
    sprintf(d, "%d", cycle);
    write(1, d, strlen(d));
    write(1, "\n", 1);
    take_answer3(&answer);
    return (answer);
}