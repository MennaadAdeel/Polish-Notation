#include <stdio.h>
#include <stdlib.h>
#include "libs/std_types/std_types.h"
#include "src/privilege.h"


int main(void){
    string_t post;
    f64_t res;
    GeneratePostifix(&post, "A+B*C$D/E+F*G-H\0");
    printf("%s\n", post);

    GeneratePostifix(&post, "2+4*53$2/56+4*23-1201\0");
    printf("%s\n", post);
    EvaluatePostifix(&res, post);
    printf("Postifix Value : %0.5lf", res);
    return 0;
}