/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** check_end.c
*/

#include "n4s.h"

void check_end(track_t *track, char *str)
{
    if (strc(str, "Track Cleared"))
        track->stop = 1;
}