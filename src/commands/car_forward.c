/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** car_forward.c
*/

#include "n4s.h"

answer1_t car_forward(float speed)
{
    answer1_t answer;
    char f[50];

    write(1, "CAR_FORWARD:", 12);
    sprintf(f, "%f", speed);
    write(1, f, strlen(f));
    write(1, "\n", 1);
    take_answer1(&answer);
    return (answer);
}