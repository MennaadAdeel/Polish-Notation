#include <stdio.h>
#include <math.h>
#include "..\std_types\std_types.h"


u32_t squareRoot(u128_t num){
    return sqrt((double) num);
}

s128_t Power(s128_t num, s128_t power){
    return pow((double) num, (double) power);
}

s128_t sum(s128_t num1, s128_t num2){
    return num1 + num2;
}

s128_t subtract(s128_t num1, s128_t num2){
    return num1 - num2;
}

s128_t multiply(s128_t num1, s128_t num2){
    return num1 * num2;
}

f64_t divide(s128_t num1, s128_t num2){
    return num1/(float) num2;
}