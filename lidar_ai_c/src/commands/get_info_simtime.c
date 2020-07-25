/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** get_info_simtime.c
*/

#include "n4s.h"

answer4_t get_info_simtime(void)
{
    answer4_t answer;

    write(1, "GET_INFO_SIMTIME\n", 17);
    take_answer4(&answer);
    return (answer);
}