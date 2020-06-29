/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** get_current_wheels.c
*/

#include "n4s.h"

answer3_t get_current_wheels(void)
{
    answer3_t answer;

    write(1, "GET_CURRENT_WHEELS\n", 19);
    take_answer3(&answer);
    return (answer);
}