#ifndef _CONFIG_FILE_
#define _CONFIG_FILE_

#include "../libs/std_types/std_types.h"
/*
*   CHOOSE:
        _GENERATE_POSTIFIX_ : to obtain a postifix expression
        _EVALUATE_POSTIFIX_ : to obtain the final result of a postifix expression
*
*/
#define _GENERATE_POSTIFIX_


typedef struct{
    u8_t type;
    union data{
        s128_t operand;
        u8_t operators;
    }value;
}Element_t;
    


#endif