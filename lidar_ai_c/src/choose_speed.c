/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** choose_speed.c
*/

#include "n4s.h"

float choose_speed(track_t *track)
{
    answer2_t answer = get_info_lidar();
    answer1_t tmp;
    check_end(track, answer.additionnal_info);
    float cur = 0;
    float front = 0;

    if (arrlen(answer.info) == 32)
        front = (atof(answer.info[16]) + atof(answer.info[15])) / 2;
    for (int i = 1; i <= 50; i++)
        if (front <= 62 * i) {
            cur = (float)(i - 1) / 49;
            break;
        }
    tmp = car_forward(cur);
    check_end(track, tmp.additionnal_info);
    clear_trash(answer.trash);
    clear_trash(tmp.trash);
    return (front);
}