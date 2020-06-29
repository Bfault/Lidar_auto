/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** get_info_lidar.c
*/

#include "n4s.h"

answer2_t get_info_lidar(void)
{
    answer2_t answer;

    write(1, "GET_INFO_LIDAR\n", 15);
    take_answer2(&answer);
    return (answer);
}