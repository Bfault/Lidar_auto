/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** n4s.h
*/

#ifndef _N4S_H_
#define _N4S_H_

#define ROTATE (1.875)

#include "my.h"
#include <string.h>
#include <math.h>

typedef struct answer1
{
    char *value_id;
    char *status;
    char *code_str;
    char *additionnal_info;
    char *timestamp;
    char **trash;
} answer1_t;

typedef struct answer2
{
    char *value_id;
    char *status;
    char *code_str;
    char **info;
    char *additionnal_info;
    char *timestamp;
    char **trash;
} answer2_t;

typedef struct answer3
{
    char *value_id;
    char *status;
    char *code_str;
    float info;
    char *additionnal_info;
    char *timestamp;
    char **trash;
} answer3_t;

typedef struct answer4
{
    char *value_id;
    char *status;
    char *code_str;
    long info[2];
    char *additionnal_info;
    char *timestamp;
    char **trash;
} answer4_t;

typedef struct track_s
{
    int stop;
} track_t;

answer1_t   start_simulation    (void);
answer1_t   stop_simulation     (void);
answer1_t   car_forward         (float);//(speed)
answer1_t   car_backwards       (float);//(speed)
answer1_t   wheels_dir          (float);//(rotation)
answer2_t   get_info_lidar      (void);
answer3_t   get_current_speed   (void);
answer3_t   get_current_wheels  (void);
answer3_t   cycle_wait          (int);//(cycle)
answer3_t   get_car_speed_max   (void);
answer3_t   get_car_speed_min   (void);
answer4_t   get_info_simtime    (void);

int         engine_process      (void);
void        choose_dir          (float, track_t *);
float       choose_speed        (track_t *);//(track)
void        take_answer1        (answer1_t *);//(answer1)
void        take_answer2        (answer2_t *);//(answer1)
void        take_answer3        (answer3_t *);//(answer1)
void        take_answer4        (answer4_t *);//(answer1)
void        put_in_log          (char *);//(string to put in log)
void        clear_log           (void);
void        clear_trash         (char **);//(answer who need to be free)
void        center_wheels       (void);
void        check_end           (track_t *, char *);//(track, other info)
void        stop_it             (void);

#endif