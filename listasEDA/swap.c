
void swap(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int a = 100;
    int b = 150;

    swap(&a, &b);

    return 0;
}