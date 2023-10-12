#include "float_vector.h"
#include <stdio.h>
// cosider the float_vector.o for this compilation = gcc app.c float_vector.o -o app

int main(){
    FloatVector *vec = createFloatVector(5);
    printFloatVector(vec);

    appendFloatVector(vec, 0.0);
    appendFloatVector(vec, 1.5);
    appendFloatVector(vec, 2.2);
    printFloatVector(vec);

    printf("GET [%d] : %.1f\n", 1, getFloatVector(vec, 1));
    
    setFloatVector(vec, 1, 5.4);
    printFloatVector(vec);

    destroyFloatVector(&vec);

    return 0;
}
