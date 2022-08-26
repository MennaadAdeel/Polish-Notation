#include <stdio.h>
#include "libs/std_types/std_types.h"
#include "src/privilege.h"


int main(void){
    u8_t* post;
    GeneratePostifix(&post, "A+B*C$D/E-F");
    printf("%s", post);
    return 0;
}