#ifndef _CONFIG_FILE_
#define _CONFIG_FILE_

#include "../libs/std_types/std_types.h"


typedef struct{
    u8_t type;
    union data{
        s128_t operand;
        u8_t operators;
    }value;
}Element_t;
    


#endif