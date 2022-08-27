#ifndef _PRIVATE_FILE_
#define _PRIVATE_FILE_

#include "../libs/std_types/std_types.h"

#define IS_OPERATOR         'o'
#define IS_NUMBER           'n'
#define IS_DIGIT            (c >= '0' && c <= '9')
#define IS_SMALL_LATER      (c >= 'a' && c <= 'z')
#define IS_CAPITAL_LATER    (c >= 'A' && c <= 'Z')

static u32_t precedent(u8_t, u8_t);

static u8_t Is_Digit(u8_t);

static f64_t Calc(f64_t, f64_t, u8_t);

#endif