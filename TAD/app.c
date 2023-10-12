#include "float_vector.h"
#include <stdio.h>
// cosider the float_vector.o for this compilation = gcc app.c float_vector.o -o app

int main(){
    FloatVector *vec = create(5);
    print(vec);

    append(vec, 0.0);
    append(vec, 1.5);
    append(vec, 2.2);
    print(vec);

    printf("GET [%d] : %.1f\n", 1, get(vec, 1));
    
    set(vec, 1, 5.4);
    print(vec);

    destroy(&vec);

    return 0;
}
