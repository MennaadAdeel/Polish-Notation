#ifndef _PRIVATE_FILE_
#define _PRIVATE_FILE_

#include "../libs/std_types/std_types.h"

#define IS_OPERATOR 'o'
#define IS_NUMBER   'n'

static u32_t precedent(u8_t, u8_t);

static u8_t Is_Digit(u8_t);

static f64_t Calc(s128_t, s128_t, u8_t);

#endif