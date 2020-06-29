/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** start_simulation.c
*/

#include "n4s.h"

answer1_t start_simulation(void)
{
    answer1_t answer;

    write(1, "START_SIMULATION\n", 17);
    take_answer1(&answer);
    return (answer);
}