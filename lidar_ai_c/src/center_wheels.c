/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** center_wheels.c
*/

#include "n4s.h"

void center_wheels(void)
{
    answer3_t answer2 = get_current_wheels();
    float pro_dir = answer2.info;

    wheels_dir(-pro_dir);
}