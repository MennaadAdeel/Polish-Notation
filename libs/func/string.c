#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "../std_types/std_types.h"


void GetString(u8_t** str){
    *str = (u8_t*) malloc(100 * sizeof(**str));
    scanf("%s", *str);
    *str = realloc(*str, strlen(*str) * sizeof(**str));
}

void Concatinate(u8_t c, u8_t** str){
    if(strlen(str) > 1){
        *str = realloc(*str, (strlen(*str) + 1) * sizeof(u8_t));
        *(*str + (strlen(*str) - 1)) = c;
    }
    else{
        *(*str + (strlen(*str) - 1)) = c;
    }
}

u128_t Sto_int(u8_t* str){
    u128_t num = 0, i = 0;
    while (*(str + i) != '\0')
    {
        num += ((*(str + i) - '0') * pow(10, strlen(str) - 1));
        i++;
    }
    
    return num;
}