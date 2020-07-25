/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** stop_simulation.c
*/

#include "n4s.h"

answer1_t stop_simulation(void)
{
    answer1_t answer;

    write(1, "STOP_SIMULATION\n", 16);
    take_answer1(&answer);
    return (answer);
}