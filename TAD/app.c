#include "float_vector.h"
// cosider the float_vector.o for this compilation = gcc app.c float_vector.o -o app

int main(){
    FloatVector *vec = create(2);
    print(vec);

    append(vec, 0.0);
    append(vec, 1.0);

    print(vec);
    append(vec, 2.2);
    print(vec);

    destroy(&vec);

    return 0;
}
