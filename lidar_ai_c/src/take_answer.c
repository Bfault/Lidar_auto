/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** take_answer1.c
*/

#include "n4s.h"

void take_answer4(answer4_t *answer)
{
    char **arr = NULL;
    char **arr_2 = NULL;
    char *buffer = NULL;
    size_t zero = 0;
    int len = 0;

    getline(&buffer, &zero, stdin);
    arr = parse_char(buffer, ":\n");
    len = arrlen(arr);
    answer->value_id = arr[0];
    answer->status = arr[1];
    answer->code_str = arr[2];
    arr_2 = parse_char(arr[3], ",\n");
    answer->info[0] = atol(arr_2[0]);
    answer->info[1] = atol(arr_2[1]);
    answer->additionnal_info = arr[4];
    if (len == 6)
        answer->timestamp = arr[5];
    answer->trash = arr;
    free(buffer);
}

void take_answer3(answer3_t *answer)
{
    char **arr = NULL;
    char *buffer = NULL;
    size_t zero = 0;
    int len = 0;

    getline(&buffer, &zero, stdin);
    arr = parse_char(buffer, ":\n");
    len = arrlen(arr);
    answer->value_id = arr[0];
    answer->status = arr[1];
    answer->code_str = arr[2];
    answer->info = atof(arr[3]);
    answer->additionnal_info = arr[4];
    if (len == 6)
        answer->timestamp = arr[5];
    free(buffer);
}

void take_answer2(answer2_t *answer)
{
    char **arr = NULL;
    char *buffer = NULL;
    size_t zero = 0;
    int len = 0;
    int i = 0;

    getline(&buffer, &zero, stdin);
    arr = parse_char(buffer, ":\n");
    len = arrlen(arr);
    if (len != 36 && len != 37) stop_it();
    answer->info = my_malloc(sizeof(char *) * (32 + 1));
    answer->value_id = arr[0];
    answer->status = arr[1];
    answer->code_str = arr[2];
    for (i = 3; i < 35; i++)
        answer->info[i - 3] = arr[i];
    answer->additionnal_info = arr[35];
    answer->trash = arr;
    if (len == 37)
        answer->timestamp = arr[36];
    free(buffer);
}

void take_answer1(answer1_t *answer)
{
    char **arr = NULL;
    char *buffer = NULL;
    size_t zero = 0;
    int len = 0;

    getline(&buffer, &zero, stdin);
    arr = parse_char(buffer, ":\n");
    len = arrlen(arr);
    answer->value_id = arr[0];
    answer->status = arr[1];
    answer->code_str = arr[2];
    answer->additionnal_info = arr[3];
    if (len == 5)
        answer->timestamp = arr[4];
    answer->trash = arr;
    free(buffer);
}