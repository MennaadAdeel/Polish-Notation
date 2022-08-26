#ifndef _POLISH_PRIVILEGES_
#define _POLISH_PRIVILEGES_
#include "../libs/std_types/std_types.h"
#include "../libs/std_types/Polish_Errors.h"

PolishError_t GeneratePostifix(u8_t**, u8_t*);

// PolishError_t GenerateInfix(u8_t**, u8_t*);

PolishError_t EvaluatePostifix(u128_t*, u8_t*);


#endif