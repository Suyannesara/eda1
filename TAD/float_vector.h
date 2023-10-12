// especificacao
// - lib

typedef struct float_vector FloatVector;

FloatVector *create(int capacity);
void destroy(FloatVector **vec_ref);
void append(FloatVector *vec, float val);
void print(FloatVector *vec);