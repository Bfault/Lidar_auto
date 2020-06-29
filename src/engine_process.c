/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** engine_process.c
*/

#include "n4s.h"

int engine_process(void)
{
    track_t track;
    float front = 0.0;

    track.stop = 0;
    do {
        front = choose_speed(&track);
        choose_dir(front, &track);
    } while (track.stop == 0);
    car_forward(0);
    return (0);
}