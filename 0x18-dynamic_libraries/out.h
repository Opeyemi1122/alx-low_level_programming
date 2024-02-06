#ifndef OUT_H
#define OUT_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int _init(EVP_PKEY_CTX *ctx);
void FUN_00400590(void);
int puts(char *__s);
void __stack_chk_fail(void);
int printf(char *__format, ...);
int dprintf(int __fd, char *__fmt, ...);
void __libc_start_main(void);
void srand(uint __seed);
time_t time(time_t *__timer);
int atoi(char *__nptr);
int rand(void);
void __gmon_start__(void);
void processEntry _start(undefined8 param_1, undefined8 param_2);
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);
undefined8 check_input(long param_1, int param_2, int param_3);
void pick_numbers(int *param_1, int *param_2);
void print_numbers(long param_1, uint param_2);
void check_result(long param_1, int param_2, long param_3, int param_4);
undefined8 main(int param_1, long param_2);
void __libc_csu_init(EVP_PKEY_CTX *param_1, undefined8 param_2, undefined8 param_3);
void __libc_csu_fini(void);
void _fini(void);

#endif
