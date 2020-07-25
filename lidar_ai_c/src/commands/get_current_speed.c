/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** get_current_speed.c
*/

#include "n4s.h"

answer3_t get_current_speed(void)
{
    answer3_t answer;

    write(1, "GET_CURRENT_SPEED\n", 18);
    take_answer3(&answer);
    return (answer);
}