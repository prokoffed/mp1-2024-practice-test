// Задача 1. Дан непустой массив A из N элементов.
// Преобразовать его, прибавив к нечетным числам первый элемент,
// а к четным – последний. Первый и последний элементы массива не менять. 
void task1(unsigned A[], size_t N) {
   
    if (N < 2) {
        printf("The array is too small to complete.\n");
        return;
    }

    unsigned first = A[0];
    unsigned last = A[N - 1];

    for (size_t i = 1; i < N - 1; i++) {
        if (A[i] % 2 == 0) {
            A[i] += last; 
        }
        else {
            A[i] += first; 
        }
    }
}

int main() {
    unsigned A[] = { 7,2,8,3,5,6,4,7,2,1 }; // можно изменить
    size_t N = sizeof(A) / sizeof(A[0]);

    printf("The source array: ");
    for (size_t i = 0; i < N; i++) {
        printf("%u ", A[i]);
    }
    printf("\n");

    task1(A, N);

    printf("Converted array: ");
    for (size_t i = 0; i < N; i++) {
        printf("%u ", A[i]);
    }
    printf("\n");

    return 0;
}
