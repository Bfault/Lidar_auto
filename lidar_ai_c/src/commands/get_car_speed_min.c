/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** get_car_speed_min.c
*/

#include "n4s.h"

answer3_t get_car_speed_min(void)
{
    answer3_t answer;

    write(1, "GET_CAR_SPEED_MIN\n", 18);
    take_answer3(&answer);
    return (answer);
}