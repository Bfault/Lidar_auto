/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** choose_dir.c
*/

#include "n4s.h"

void choose_dir(float front, track_t *track)
{
    answer2_t answer = get_info_lidar();
    answer1_t tmp;
    float xleft = 0.0;
    float xright = 0.0;
    float dir = 0.0;

    check_end(track, answer.additionnal_info);
    if (arrlen(answer.info) == 32) {
        xleft = atof(answer.info[0]);
        xright = atof(answer.info[31]);
    }
    dir = powf(3100, -front / 3100);
    if (xright > xleft)
        dir = -dir;
    tmp = wheels_dir(dir);
    check_end(track, tmp.additionnal_info);
    clear_trash(answer.trash);
    clear_trash(tmp.trash);
}