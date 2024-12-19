// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 2).
// Найти число серий длины 3 в массиве.
int task2(unsigned A[], size_t n) {
    if (n < 3) {
        return 0; 
    }

    int count = 0;
    for (size_t i = 0; i < n - 2; i++) {
        if (A[i] == A[i + 1] && A[i] == A[i + 2]) {
            count++; 
        }
    }

    return count;
}

int main() {
    unsigned A[] = { 1, 2, 2, 2, 3, 3, 3, 4, 5, 5, 5, 6 }; // можно менять
    size_t n = sizeof(A) / sizeof(A[0]);

    printf("The source array: ");
    for (size_t i = 0; i < n; i++) {
        printf("%u ", A[i]);
    }
    printf("\n");
    int result = task2(A, n);
    printf("Number of series of length 3: %d\n", result);
    return -1;
}
