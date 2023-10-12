// especificacao
// - lib

typedef struct float_vector FloatVector;

FloatVector *createFloatVector(int capacity);
void destroyFloatVector(FloatVector **vec_ref);
int sizeFloatVector(const FloatVector *vec);
int capacityFloatVector(const FloatVector *vec);
float getFloatVector(const FloatVector *vec, int index);
void printFloatVector(const FloatVector *vec);
void appendFloatVector(FloatVector *vec, float val);
void setFloatVector(FloatVector *vec, int index, float val);